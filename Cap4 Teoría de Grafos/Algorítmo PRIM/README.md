<h1 align="center"> PRIM </h1>

### Concepto 

El algoritmo de Prim es un algoritmo perteneciente a la teoría de los grafos para encontrar un árbol recubridor mínimo en un grafo conexo, no dirigido y cuyas aristas están etiquetadas.

En otras palabras, el algoritmo encuentra un subconjunto de aristas que forman un árbol con todos los vértices, donde el peso total de todas las aristas en el árbol es el mínimo posible. Si el grafo no es conexo, entonces el algoritmo encontrará el árbol recubridor mínimo para uno de los componentes conexos que forman dicho grafo no conexo.

El algoritmo fue diseñado en 1930 por el matemático Vojtech Jarnik y luego de manera independiente por el científico computacional Robert C. Prim en 1957 y redescubierto por Dijkstra en 1959. Por esta razón, el algoritmo es también conocido como algoritmo DJP o algoritmo de Jarnik.

El algoritmo incrementa continuamente el tamaño de un árbol, comenzando por un vértice inicial al que se le van agregando sucesivamente vértices cuya distancia a los anteriores es mínima. Esto significa que en cada paso, las aristas a considerar son aquellas que inciden en vértices que ya pertenecen al árbol.

El árbol recubridor mínimo está completamente construido cuando no quedan más vértices por agregar.

El algoritmo podría ser informalmente descrito siguiendo los siguientes pasos:

1. Seleccionar un nodo cualquiera.
2. Mandar los nodos vecinos no visitados a una cola de prioridad por peso.
3. Sacar el nodo de la cola, evitando los visitados. 
4. Repetir el paso 2 y 3 (hasta que todos los vértices pertenezcan al árbol).

Como comienza el grafo:

![image](https://user-images.githubusercontent.com/90888080/196334760-345a6a51-d25e-4612-a563-13e993d9aaa7.png)

Proceso:

![image](https://user-images.githubusercontent.com/90888080/196334811-eec11338-698c-4b0f-afcb-49bcafc5d8da.png)

![image](https://user-images.githubusercontent.com/90888080/196334830-d8f52f12-a4f1-4b8b-86ac-7a1803b9f504.png)

Como termina:

![image](https://user-images.githubusercontent.com/90888080/196334791-cd8c2604-9103-4dbe-bd4c-44b21f8858c8.png)

### Código Base
- [PRIM](https://github.com/PabloAcker/Algoritmica/blob/main/Cap4%20Teor%C3%ADa%20de%20Grafos/Algor%C3%ADtmo%20PRIM/prim.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=cplfcGZmX7I&t=1s). Basic of PRIM.
- [Video de apoyo 1](https://www.youtube.com/watch?v=ZtZaR7EcI5Y). PRIM structure.
- [Conceptos de PRIM](https://es.wikipedia.org/wiki/Algoritmo_de_Prim#:~:text=El%20algoritmo%20incrementa%20continuamente%20el,que%20ya%20pertenecen%20al%20%C3%A1rbol.)
