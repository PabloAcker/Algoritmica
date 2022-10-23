#include <iostream>
#include <string>
using namespace std;
 
// Función para encontrar la mejor manera de cortar una varilla de longitud `n`
// donde la barra de longitud `i` tiene un costo `price[i-1]`
int rodCut(int price[], int n)
{
    // `T[i]` almacena la ganancia máxima obtenida de una varilla de longitud `i`
    int T[n + 1];
 
    // inicializa el beneficio máximo a 0
    for (int i = 0; i <= n; i++) {
        T[i] = 0;
    }
 
    // considera una barra de longitud `i`
    for (int i = 1; i <= n; i++)
    {
        // divide la barra de longitud `i` en dos barras de longitud `j`
        // y `i-j` cada uno y toma el máximo
        for (int j = 1; j <= i; j++) {
            T[i] = max(T[i], price[j - 1] + T[i - j]);
        }
    }
 
    // `T[n]` almacena la ganancia máxima obtenida de una varilla de longitud `n`
    return T[n];
}
 
int main()
{
    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
 
    // longitud de la varilla
    int n = 4;
 
    cout << "Profit is " << rodCut(price, n);
 
    return 0;
}
