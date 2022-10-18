<h1 align="center"> Kruskal </h1>

### Concepto 

El algoritmo de Kruskal es un algoritmo de la teoría de grafos para encontrar un árbol recubridor mínimo en un grafo conexo y ponderado. Es decir, busca un subconjunto de aristas que, formando un árbol, incluyen todos los vértices y donde el valor de la suma de todas las aristas del árbol es el mínimo. Si el grafo no es conexo, entonces busca un bosque expandido mínimo (un árbol expandido mínimo para cada componente conexa). Este algoritmo toma su nombre de Joseph Kruskal, quien lo publicó por primera vez en 1956. Otros algoritmos que sirven para hallar el árbol de expansión mínima o árbol recubridor mínimo son el algoritmo de Prim (Que se encuentra en este github), el algoritmo del borrador inverso y el algoritmo de Boruvka.

El algoritmo de Kruskal es un ejemplo de algoritmo voraz que funciona de la siguiente manera:

- se crea un bosque B (un conjunto de árboles), donde cada vértice del grafo es un árbol separado
- se crea un conjunto C que contenga a todas las aristas del grafo
- mientras C es no vacío
- eliminar una arista de peso mínimo de C
- si esa arista conecta dos árboles diferentes se añade al bosque, combinando los dos árboles en un solo árbol
- en caso contrario, se desecha la arista
Al acabar el algoritmo, el bosque tiene un solo componente, el cual forma un árbol de expansión mínimo del grafo.

En un árbol de expansión mínimo se cumple:

- la cantidad de aristas del árbol es la cantidad de nodos menos uno.

### Código Base
- [Búsqueda Binaria](https://github.com/PabloAcker/Algoritmica/blob/main/Cap3%20Programaci%C3%B3n%20Din%C3%A1mica/B%C3%BAsqueda%20Binaria/busquedaBinaria.cpp)

### Bibliografía
- [Video de apoyo](https://www.youtube.com/watch?v=fDKIpRe8GW4). Basic of Binary Search
- [Conceptos de Búsqueda Binaria](https://es.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search#:~:text=La%20b%C3%BAsqueda%20binaria%20es%20un,ubicaciones%20posibles%20a%20solo%20una.)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Busqueda_Binaria)
