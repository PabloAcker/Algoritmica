#include <iostream>
#include <cstring>
using namespace std;
 
// Función para encontrar la distancia de Levenshtein entre la string `X` y `Y`.
// `m` y `n` es el número total de caracteres en `X` e `Y`, respectivamente
int dist(string X, string Y)
{
    int m = X.length();
    int n = Y.length();
 
    // Para todos los pares de `i` y `j`, `T[i, j]` mantendrá la distancia de Levenshtein
    // entre los primeros caracteres `i` de `X` y los primeros caracteres `j` de `Y`.
    // Tenga en cuenta que `T` tiene valores `(m+1)×(n+1)`.
    int T[m + 1][n + 1];
 
    // inicializa `T` por todos los 0
    memset(T, 0, sizeof T);
 
    // podemos transformar los prefijos de origen en una string vacía
    // quitando todos los caracteres
 
    for (int i = 1; i <= m; i++) {
        T[i][0] = i;                // (caso 1)
    }
 
    // podemos llegar a los prefijos de destino desde el prefijo de origen vacío
    // insertando cada caracter
 
    for (int j = 1; j <= n; j++) {
        T[0][j] = j;                // (caso 1)
    }
 
    int substitutionCost;
 
    // llenar la tabla de búsqueda de forma ascendente
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1]) {                 // (caso 2)
                substitutionCost = 0;                   // (caso 2)
            }
            else {
                substitutionCost = 1;                   // (caso 3c)
            }
            T[i][j] = min(min(T[i - 1][j] + 1,          // borrado (caso 3b)
                            T[i][j - 1] + 1),           // inserción (caso 3a)
                T[i - 1][j - 1] + substitutionCost);    // reemplazar (caso 2 y 3c)
        }
    }
 
    return T[m][n];
}
 
int main()
{
    string X = "kitten", Y = "sitting";
 
    cout << "The Levenshtein distance is " << dist(X, Y);
 
    return 0;
}
