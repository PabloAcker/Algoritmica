#include <iostream>
#include <vector>
using namespace std;

int LIS(int arr[], int i, int n, int prev)
 
// Función iterativa para encontrar la subsecuencia creciente más larga
// de una array dada
void findLIS(vector<int> const &arr)
{
    int n = arr.size();
 
    // caso base
    if (n == 0) {
        return;
    }
 
    // LIS[i] almacena la subsecuencia creciente más larga del subarray
    // `arr[0…i]` que termina en `arr[i]`
    vector<vector<int>> LIS(n, vector<int>{});
 
    // LIS[0] denota la subsecuencia creciente más larga que termina en `arr[0]`
    LIS[0].push_back(arr[0]);
 
    // comienza desde el segundo elemento de la array
    for (int i = 1; i < n; i++)
    {
        // hacer para cada elemento en el subarray `arr[0…i-1]`
        for (int j = 0; j < i; j++)
        {
            // encuentra la subsecuencia creciente más larga que termina con `arr[j]`
            // donde `arr[j]` es menor que el elemento actual `arr[i]`
 
            if (arr[j] < arr[i] && LIS[j].size() > LIS[i].size()) {
                LIS[i] = LIS[j];
            }
        }
 
        // incluir `arr[i]` en `LIS[i]`
        LIS[i].push_back(arr[i]);
    }
 
    for (int i = 0; i < n; i++)
    {
        cout << "LIS[" << i << "] — ";
        for (int j: LIS[i]) {
            cout << j << " ";
        }
        cout << endl;
    } 
 
    // `j` almacenará el índice de LIS
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (LIS[j].size() < LIS[i].size()) {
            j = i;
        }
    }
 
    // imprimir LIS
    for (int i: LIS[j]) {
        cout << i << " ";
    }
}
 
int main()
{
    vector<int> arr = { 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 };
 
    findLIS(arr);
 
    return 0;
}
