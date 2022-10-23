#include <iostream>
#include <vector>
#include <climits>
#include <iomanip>
using namespace std;
 
// Función recursivo para imprimir la ruta del vértice `u` dado desde el vértice fuente `v`
void printPath(vector<vector<int>> const &path, int v, int u)
{
    if (path[v][u] == v) {
        return;
    }
    printPath(path, v, path[v][u]);
    cout << path[v][u] << ", ";
}
 
// Función para imprimir el costo más corto con información de ruta entre
// todos los pares de vértices
void printSolution(vector<vector<int>> const &cost, vector<vector<int>> const &path)
{
    int n = cost.size();
    for (int v = 0; v < n; v++)
    {
        for (int u = 0; u < n; u++)
        {
            if (u != v && path[v][u] != -1)
            {
                cout << "The shortest path from " << v << " —> " << u << " is ["
                    << v << ", ";
                printPath(path, v, u);
                cout << u << "]" << endl;
            }
        }
    }
}
 
// Función para ejecutar el algoritmo de Floyd-Warshall
void floydWarshall(vector<vector<int>> const &adjMatrix)
{
    // número total de vértices en `adjMatrix`
    int n = adjMatrix.size();
 
    // caso base
    if (n == 0) {
        return;
    }
 
    // cost[] y path[] almacena la ruta más corta
    // (coste más corto/ruta más corta) información
    vector<vector<int>> cost(n, vector<int>(n));
    vector<vector<int>> path(n, vector<int>(n));
 
    // inicializar cost[] y path[]
    for (int v = 0; v < n; v++)
    {
        for (int u = 0; u < n; u++)
        {
            // inicialmente, el costo sería el mismo que el peso del borde
            cost[v][u] = adjMatrix[v][u];
 
            if (v == u) {
                path[v][u] = 0;
            }
            else if (cost[v][u] != INT_MAX) {
                path[v][u] = v;
            }
            else {
                path[v][u] = -1;
            }
        }
    }
 
    // ejecutar Floyd-Warshall
    for (int k = 0; k < n; k++)
    {
        for (int v = 0; v < n; v++)
        {
            for (int u = 0; u < n; u++)
            {
                // Si el vértice `k` está en el camino más corto de `v` a `u`,
                // luego actualice el valor de cost[v][u] y path[v][u]
 
                if (cost[v][k] != INT_MAX && cost[k][u] != INT_MAX
                    && cost[v][k] + cost[k][u] < cost[v][u])
                {
                    cost[v][u] = cost[v][k] + cost[k][u];
                    path[v][u] = path[k][u];
                }
            }
 
            // si los elementos diagonales se vuelven negativos, el
            // el graph contiene un ciclo de peso negativo
            if (cost[v][v] < 0)
            {
                cout << "Negative-weight cycle found!!";
                return;
            }
        }
    }
 
    // Imprime el camino más corto entre todos los pares de vértices
    printSolution(cost, path);
}
 
int main()
{
    // definir infinito
    int I = INT_MAX;
 
    // dada la representación de adyacencia de la matriz
    vector<vector<int>> adjMatrix =
    {
        { 0, I, -2, I },
        { 4, 0, 3, I },
        { I, I, 0, 2 },
        { I, -1, I, 0 }
    };
 
    // Ejecutar el algoritmo de Floyd–Warshall
    floydWarshall(adjMatrix);
 
    return 0;
}
