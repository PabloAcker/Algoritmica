<h1 align="center"> LIS </h1>

### Concepto 

El problema de la subsecuencia creciente más larga (Longest Increasing Subsequence) es encontrar una subsecuencia de una secuencia dada en la que los elementos de la subsecuencia estén ordenados, de menor a mayor, y en la que la subsecuencia sea lo más larga posible. Esta subsecuencia no es necesariamente contigua o única.

Tenga en cuenta que el problema se dirige específicamente subsecuencias que no necesitan ser contiguos, es decir, no se requiere que las subsecuencias ocupen posiciones consecutivas dentro de las secuencias originales.

Por ejemplo, la subsecuencia creciente más larga de [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15] es [0, 2, 6, 9, 11, 15].

Esta subsecuencia tiene una longitud de 6; la secuencia de entrada no tiene subsecuencias crecientes de 7 miembros. La subsecuencia creciente más larga en este ejemplo no es única.

### Parte práctica:
La idea es usar recursión para resolver este problema. Para cada artículo, hay dos posibilidades:

- Incluir el elemento actual en LIS si es mayor que el elemento anterior en LIS y repetir para los elementos restantes.
- Excluye el elemento actual de LIS y repite para los elementos restantes.

Finalmente, devuelve el valor máximo que obtenemos al incluir o excluir el elemento actual. El caso base de la recursividad sería cuando no quedan elementos.

Podemos resolver este problema de forma ascendente. En el enfoque de abajo hacia arriba, primero resuelva los subproblemas más pequeños y luego resuelva los subproblemas más grandes a partir de ellos. El siguiente enfoque ascendente calcula L[i], para cada 0 <= i < n, que almacena la longitud de la subsecuencia creciente más larga del subarray arr[0…i] que termina con arr[i]. Calcular L[i], considere LIS de todos los valores más pequeños de i (decir j) ya calculado y elija el máximo L[j], dónde arr[j] es menor que el elemento actual arr[i]. Tiene el mismo tiempo de ejecución asintótico que Memoization pero sin sobrecarga de recursividad.

La complejidad de la solución es O(n^2) y requiere O(n^2) espacio adicional, donde n es el tamaño de la secuencia dada.

### Código Base
- [LIS](https://github.com/PabloAcker/Algoritmica/blob/main/Algoritmos%20de%20investigaci%C3%B3n/Algoritmo%20LIS/lis.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=CE2b_-XfVDk). Basic LIS.
- [Video de apoyo 2](https://www.youtube.com/watch?v=0X7a37CFZXQ). LIS Structure.
- [Conceptos de LIS](https://www.techiedelight.com/es/longest-increasing-subsequence-using-dynamic-programming/)
