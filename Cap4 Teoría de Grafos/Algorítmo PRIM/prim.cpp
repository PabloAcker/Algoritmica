#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
vector<pair<int, int> > grafo[100000];
bool visitados[100000];

// Dados un grafo G, sus pesos W y el número de nodos n devuelve el coste del árbol mínimo
// generador usando el algoritmo de Prim
int Prim(int verticeInicial){
    multiset<pair<int, int>> colaPrioridad;
    colaPrioridad.insert(make_pair(0, verticeInicial)); //cola de prioridad de parejas de enteros (-distancia del nodo a F, nodo)
    int answer = 0;
    while (!colaPrioridad.empty()){
        pair<int, int> verticeActual = *colaPrioridad.begin();
        colaPrioridad.erase(colaPrioridad.begin()); //lo quitamos de la cola

        int vertice = verticeActual.second; //vértice de Q a menor distancia de F
        int peso = verticeActual.first; //distancia entre F y v

        if (!visitados[vertice]){ //si no lo hemos visitado
            visitados[vertice] = true;
            answer += peso;
            for (int i = 0; i < grafo[vertice].size(); ++i){ //miramos sus vecinos
                int verticeVecino = grafo[vertice][i].second;
                int pesoVecino = grafo[vertice][i].first;
                colaPrioridad.insert(make_pair(pesoVecino, verticeVecino)); // añadimos los vecinos conectados con u
            }
        }   
    }

    return answer; // devolvemos el coste
}

int main()
{
    int vertices, aristas;
    cin >> vertices >> aristas;
    for (int i = 0; i < aristas; i++)
    {
        int ini,fin,peso; 
        cin>>ini>>fin>>peso;
        grafo[ini].push_back(make_pair(peso,fin));
        grafo[fin].push_back(make_pair(peso,ini));
    }
    cout <<  Prim(0) << endl;
    return 0;
}
