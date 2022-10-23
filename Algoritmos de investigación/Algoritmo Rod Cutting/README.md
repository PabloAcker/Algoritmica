<h1 align="center"> Rod Cutting </h1>

### Concepto 

El problema de Rod Cutting (corte de varilla en español) nos dice que dada una varilla de longitud n y una lista de precios de varillas de longitud i, dónde 1 <= i <= n, encuentre la forma óptima de cortar la varilla en varillas más pequeñas para maximizar las ganancias.

Por ejemplo, considere las siguientes longitudes y valores de varilla:

Input:
 
length[] = [1, 2, 3, 4, 5, 6, 7, 8]
price[] = [1, 5, 8, 9, 10, 17, 17, 20]

Rod length: 4
 
Best: Cut the rod into two pieces of length 2 each to gain revenue of 5 + 5 = 10

###Parte práctica:
Nos dan una array price[], donde la varilla de longitud i tiene un valor price[i-1]. La idea es simple: uno por uno, divida la barra dada de longitud n en dos partes: i y n-i. Recur para la barra de longitud n-i pero no dividas la vara de longitud i más lejos. Finalmente, tome el máximo de todos los valores. Esto produce la siguiente relación recursivo:

rodcut(n) = max { price[i – 1] + rodCut(n – i) } where 1 <= i <= n

Hemos visto que el problema se puede dividir en subproblemas más pequeños, que a su vez se pueden dividir en subproblemas aún más pequeños, y así sucesivamente. Entonces, el problema tiene subestructura óptima. Consideremos un árbol de recurrencia para la barra de longitud 4.

![image](https://user-images.githubusercontent.com/90888080/197369070-0d914214-a72c-4512-94c0-e450ebadfc29.png)

Como podemos ver, los mismos subproblemas (resaltados en el mismo color) se calculan repetidamente. Entonces, el problema también presenta subproblemas superpuestos. Sabemos que los problemas con subestructura óptima y subproblemas superpuestos pueden resolverse mediante programación dinámica, donde las soluciones de subproblemas son memorándumized en lugar de calculado y de nuevo.

### Código Base
- [Rod Cutting](https://github.com/PabloAcker/Algoritmica/blob/main/Algoritmos%20de%20investigaci%C3%B3n/Algoritmo%20Rod%20Cutting/rodCutting.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=ElFrskby_7M). Basic of Rod Cutting.
- [Video de apoyo 2](https://www.youtube.com/watch?v=IRwVmTmN6go). Rod Cutting Structure.
- [Conceptos de Rod Cutting](https://www.techiedelight.com/es/rod-cutting/)
