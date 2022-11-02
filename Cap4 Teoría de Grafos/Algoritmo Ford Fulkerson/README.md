<h1 align="center"> Ford Fulkerson </h1>

### Concepto 
El algoritmo de Ford-Fulkerson tiene como objetivo buscar caminos en los que se pueda aumentar el flujo usando DFS, hasta que se alcance el flujo máximo. Es aplicable a los Flujos maximales. La idea es encontrar una ruta de penetración con un flujo positivo neto que una los nodos origen y destino. Su nombre viene dado por sus creadores, L. R. Ford, Jr. y D. R. Fulkerson.

Sea G(V,E) un grafo, con V vértices, E aristas y donde por cada arista (u,v), tenemos una capacidad c(u,v) y un flujo f(u,v). Se busca maximizar el valor del flujo desde una fuente S hasta un sumidero T.

El método inicia con f(u,v)=0 para toda (u,v) en V. En cada iteración, se incrementa el flujo en G mediante el resultado de una búsqueda de un «camino de aumento» en una «red residual» G_{f}. Aunque cada iteración del método Ford-Fulkerson aumenta el valor del flujo, el flujo por arista de G puede aumentar o disminuir. En cada iteración el flujo se aumentara hasta que la red G_{f} no tenga más caminos de aumento.

El flujo a aumentar se debe considerar legal, para esto debe seguir que:

- El flujo de para toda arista (u,v) no debe ser mayor que la capacidad de dicha arista.
- El flujo que sale de la fuente S debe ser igual al que llega al sumidero T.

### Red residual G_f
Definimos una red residual G_{f}(V,E) como la red donde la capacidad de cada una de las aristas se define como c_{f}(u,v)=c(u,v)-f(u,v), donde c(u,v) es la capacidad de la arista y el flujo f(u,v) es el flujo de la arista (u,v) en el camino de aumento seleccionado.

Intuitivamente, dado el grafo G y un camino de aumento c_{F}, la red residual G_{f} consiste en el grafo que representa el como cambia la capacidad de cada una de las aristas con respecto al flujo del camino de aumento c_{F} en el grafo G.

El procedimiento es similar al del algoritmo Edmonds Karp, el cual está también explicado en este repositorio.

![image](https://user-images.githubusercontent.com/90888080/199366703-3af7b9d0-6dd0-4818-9252-5ea4f949ec27.png)

![image](https://user-images.githubusercontent.com/90888080/199367080-41c01da3-637b-4f33-a888-8f8363ed4229.png)

### Código Base
- [Ford Fulkerson](https://github.com/PabloAcker/Algoritmica/blob/main/Cap4%20Teor%C3%ADa%20de%20Grafos/Algoritmo%20Ford%20Fulkerson/fordFulkerson.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=Tl90tNtKvxs). Basic of Ford Fulkerson.
- [Video de apoyo 2](https://www.youtube.com/watch?v=LdOnanfc5TM). Ford Fulkerson Structure.
- [Video de apoyo 3](https://www.youtube.com/watch?v=GiN3jRdgxU4)
- [Conceptos de Ford Fulkerson](https://es.wikipedia.org/wiki/Algoritmo_de_Ford-Fulkerson#:~:text=El%20algoritmo%20de%20Ford%2DFulkerson,los%20nodos%20origen%20y%20destino.)
- [Conceptos de Ford Fulkerson](https://www.geeksforgeeks.org/ford-fulkerson-algorithm-for-maximum-flow-problem/). Geeks for geeks.
