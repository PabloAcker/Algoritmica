#include <iostream>
#include <vector>
using namespace std;
 
// Devuelve verdadero si existe una subsecuencia de `A` con la suma dada
bool subsetSum(vector<int> const &A, int k)
{
    // número total de elementos
    int n = A.size();
 
    // `T[i][j]` almacena verdadero si se puede obtener el subconjunto con la suma `j`
    // usar elementos hasta los primeros elementos `i`
    bool T[n + 1][k + 1];
 
    // si hay 0 elementos en la lista y la suma no es cero
    for (int j = 1; j <= k; j++) {
        T[0][j] = false;
    }
 
    // si la suma es cero
    for (int i = 0; i <= n; i++) {
        T[i][0] = true;
    }
 
    // hacer por el i-ésimo artículo
    for (int i = 1; i <= n; i++)
    {
        // considera todas las sumas de 1 a suma
        for (int j = 1; j <= k; j++)
        {
            // no incluye el i-ésimo elemento si `j-A[i-1]` es negativo
            if (A[i - 1] > j) {
                T[i][j] = T[i - 1][j];
            }
            else {
                // encuentra el subconjunto con la suma `j` excluyendo o incluyendo el i-ésimo elemento
                T[i][j] = T[i - 1][j] || T[i - 1][j - A[i - 1]];
            }
        }
    }
 
    // devuelve el valor máximo
    return T[n][k];
}
 
// Problema de suma de subconjuntos
int main()
{
    // Entrada: un conjunto de elementos y una suma
    vector<int> A = { 7, 3, 2, 5, 8 };
    int k = 18;
 
    if (subsetSum(A, k)) {
        cout << "Subsequence with the given sum exists";
    }
    else {
        cout << "Subsequence with the given sum does not exist";
    }
 
    return 0;
}
