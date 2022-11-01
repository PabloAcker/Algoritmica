<h1 align="center"> Edmonds Karp </h1>

### Concepto 
En ciencias de la computación y *teoría de grafos*, el Algoritmo de Edmonds-Karp es una implementación del método de Ford-Fulkerson (el cual se tiene la información en este mismo repositorio) para calcular el flujo maximo en una red de flujo (i.e. computer network) con complejidad O(V E^2). Es asintóticamente más lento que el algoritmo de Push-relabel, que tiene complejidad O(V^3), pero es habitualmente más rápido en la práctica para grafos ralos. El algoritmo fue publicado por primera vez por un científico soviético, Yefim Dinic, en 1970, e independientemente por Jack Edmonds y Richard Karp en 1972. El Algoritmo de Dinic incluye técnicas adicionales para reducir la complejidad a O(V^2 E).

El algoritmo es idéntico al algoritmo de Ford-Fulkerson, excepto porque el orden para ir buscando los "caminos" aumentantes está definido. El "camino" encontrado debe ser el más corto que tiene capacidad disponible. Esto se puede encontrar mediante una búsqueda en anchura (BFS), ya que dejamos que los bordes tengan unidad de longitud. La complejidad O(V E^2) se fundamenta mostrando que cada "camino" aumentante puede ser encontrado con O(E), cada vez que al menos uno de los lados E se satura, la distancia desde el lado saturado hasta el origen a través del "camino" aumentante deberá ser más largo que la última vez que este estuvo saturado, y ese largo es a lo sumo V. Otra propiedad de este algoritmo es que el largo del árbol resultante aumentante más corto se incrementa monotonamente.

### EJemplo
Dado un grafo dirigido de 7 nodos, origen A, destino G, y las capacidades que se muestran con la imagen:
![image](https://user-images.githubusercontent.com/90888080/199362238-4abe57d9-0b85-4ced-be0a-1eb0614069e7.png)

En los pares f/c escritos en los lados, f es el flujo actual, y c es la capacidad. La capacidad de la resta entre u y v es c_f(u,v)=c(u,v)-f(u,v)}, la capacidad total, menos el flujo que está en uso. Si el flujo desde u a v es negativo, esto contribuye a la capacidad del residuo.
Ahora se sigue el siguiente procedimiento:

![image](https://user-images.githubusercontent.com/90888080/199362474-15ae99bb-3327-4c25-b583-99dae0501c1c.png)

![image](https://user-images.githubusercontent.com/90888080/199362696-696e0f70-c7b8-4df6-9589-af98cab5c8ae.png)

![image](https://user-images.githubusercontent.com/90888080/199362722-182f4c4f-202f-47fb-9527-b405275eaa43.png)

![image](https://user-images.githubusercontent.com/90888080/199362730-ef5eed01-12c1-4968-9305-bce8dfb16c27.png)

### Código Base
- [Edmonds Karp](https://github.com/PabloAcker/Algoritmica/blob/main/Cap4%20Teor%C3%ADa%20de%20Grafos/Algoritmo%20Edmonds%20Karp/edmondsKarp.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=RppuJYwlcI8). Basic of Edmonds Karp.
- [Video de apoyo 2](https://www.youtube.com/watch?v=GiN3jRdgxU4). Edmonds Karp Structure.
- [Conceptos de Edmonds Karp](https://es.wikipedia.org/wiki/Algoritmo_de_Edmonds-Karp)
- [Conceptos de Edmonds Karp](http://www.famaf.unc.edu.ar/~penazzi/EKcompl.pdf)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Teoria%20de%20Grafos/Edmonds_Karp)
