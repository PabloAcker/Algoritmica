<h1 align="center"> Floyd Warshall </h1>

### Concepto 

el algoritmo de Floyd-Warshall, descrito en 1959 por Bernard Roy, es un algoritmo de análisis sobre grafos para encontrar el camino mínimo en grafos dirigidos ponderados. El algoritmo encuentra el camino entre todos los pares de vértices en una única ejecución. El algoritmo de Floyd-Warshall es un ejemplo de programación dinámica.

### ALgoritmo de Warshall:
El algoritmo de Warshall es un ejemplo de algoritmo booleano. A partir de una tabla inicial compuesta de 0`s (no hay correspondencia inicial en el grafo) y 1`s (hay una correspondencia, llamase “flecha”, entre nodos), obtiene una nueva matriz denominada “Matriz de Clausura Transitiva” en la que se muestran todas las posibles uniones entre nodos, directa o indirectamente. Es decir, si de “A” a “B” no hay una “flecha”, es posible que si haya de “A” a “C” y luego de “C” a “B”. Luego, este resultado se verá volcado en la matriz final.

### Algoritmo de Floyd:
El algoritmo de Floyd es muy similar, pero trabaja con grafos ponderados. Es decir, el valor de la “flecha” que representamos en la matriz puede ser cualquier número real o infinito. Infinito marca que no existe unión entre los nodos. Esta vez, el resultado será una matriz donde estarán representadas las distancias mínimas entre nodos, seleccionando los caminos más convenientes según su ponderación (“peso”). Por ejemplo, si de “A” a “B” hay 36 (km), pero de “A” a “C” hay 2(km) y de “C” a “B” hay 10 (km), el algoritmo nos devolverá finalmente que de “A” a “B” hay 12 (km).

Los pasos a dar en la aplicación del algoritmo de Floyd son los siguientes:

* Formar las matrices iniciales C y D, donde C es la matriz de adyacencia, y D es una matriz del mismo tamaño cargada con valores iniciales Dij = i.

* Se toma k=1.

* Se selecciona la fila y la columna k de la matriz C y entonces, para i y j, con i≠k, j≠k e i≠j, hacemos:

Si (Cik + Ckj) < Cij → Dij = Dkj y Cij = Cik + Ckj

En caso contrario, dejamos las matrices como están.

* Si k ≤ n, aumentamos k en una unidad y repetimos el paso anterior, en caso contrario paramos las iteraciones.

* La matriz final C contiene los costes óptimos para ir de un vértice a otro, mientras que la matriz D contiene los penúltimos vértices de los caminos óptimos que unen dos vértices, lo cual permite reconstruir cualquier camino óptimo para ir de un vértice a otro.

### Aplicaciones:
El algoritmo de Floyd-Warshall puede ser utilizado para resolver los siguientes problemas, entre otros:

- Camino mínimo en grafos dirigidos (algoritmo de Floyd).
- Cierre transitivo en grafos dirigidos (algoritmo de Warshall). Es la formulación original del algoritmo de Warshall. El grafo es un grafo no ponderado y representado por una matriz booleana de adyacencia. Entonces la operación de adición es reemplazada por la conjunción lógica(AND) y la operación menor por la disyunción lógica (OR).
- Encontrar una expresión regular dada por un lenguaje regular aceptado por un autómata finito (algoritmo de Kleene).
- Inversión de matrices de números reales (algoritmo de Gauss-Jordan).
- Ruta óptima. En esta aplicación es interesante encontrar el camino del flujo máximo entre 2 vértices. Esto significa que en lugar de tomar los mínimos con el pseudocodigo anterior, se coge el máximo. Los pesos de las aristas representan las limitaciones del flujo. Los pesos de los caminos representan cuellos de botella; por ello, la operación de adición anterior es reemplazada por la operación mínimo.
- Comprobar si un grafo no dirigido es bipartito.

![image](https://user-images.githubusercontent.com/90888080/197367854-559bcf67-3e77-4ef7-a272-7be0c19c06cf.png)

### Código Base
- [Floyd Warshall](https://github.com/PabloAcker/Algoritmica/blob/main/Algoritmos%20de%20investigaci%C3%B3n/Algoritmo%20Floyd%20Warshall/floydWarshall.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=h-nmexY9gtA). Basic of Floyd Warshall.
- [Video de apoyo 2](https://www.youtube.com/watch?v=YKgckdyFCL0). Floyd Warshall Structure.
- [Conceptos de Floyd Warshall](https://es.wikipedia.org/wiki/Algoritmo_de_Floyd-Warshall#:~:text=En%20inform%C3%A1tica%2C%20el%20algoritmo%20de,v%C3%A9rtices%20en%20una%20%C3%BAnica%20ejecuci%C3%B3n.)
