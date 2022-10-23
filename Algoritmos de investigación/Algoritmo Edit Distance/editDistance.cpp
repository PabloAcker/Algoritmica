#include <iostream>
using namespace std;
 
// Función para encontrar la distancia de Levenshtein entre la string `X` y `Y`.
// `m` y `n` es el número total de caracteres en `X` e `Y`, respectivamente
int dist(string X, int m, string Y, int n)
{
    // caso base: strings vacías (caso 1)
    if (m == 0) {
        return n;
    }
 
    if (n == 0) {
        return m;
    }
 
    int cost;
 
    // si los últimos caracteres de las strings coinciden (caso 2)
    if (X[m - 1] == Y[n - 1]) {
        cost = 0;
    }
    else {
        cost = 1;
    }
 
    return min (min(dist(X, m - 1, Y, n) + 1,   // borrado (caso 3a))
            dist(X, m, Y, n - 1) + 1),          // inserción (caso 3b))
            dist(X, m - 1, Y, n - 1) + cost);   // sustitución (caso 2 y 3c)
}
 
int main()
{
    string X = "kitten", Y = "sitting";
 
    cout << "The Levenshtein distance is " << dist(X, X.length(), Y, Y.length());
 
    return 0;
}
