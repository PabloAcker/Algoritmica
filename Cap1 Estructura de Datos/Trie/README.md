<h1 align="center"> Trie </h1>

### Concepto 

![image](https://user-images.githubusercontent.com/90888080/193731752-b77461f4-54a5-4262-aea7-19a4702ba77d.png)

El Trie es una estructura de datos que se utiliza en strings. Se puede utilizar para realizar búsquedas de manera óptima, con una complejidad casi lineal (dependiendo de la implementación y las restricciones del problema).

Ej. Suponiendo que tenemos 9 strings:

- hola
- aab
- holas
- holass
- xz
- aa
- aax
- holax
- ho

El Trie de esos 9 strings se ve de esta manera:

![image](https://user-images.githubusercontent.com/90888080/193733162-d95417ed-7e1c-4347-8ca3-bf40c4281928.png)

La idea del Trie es armar un árbol, donde los nodos son las letras de las palabras. Las letras que están en rojo indican los nodos donde termina una palabra. Es decir, si recorremos el arbol desde la raíz hasta ese nodo, formaremos una de las palabras iniciales. Si lo recorremos en Preorden, podemos ordenar alfabéticamente a las palabras que forman el Trie. Los números escritos expresan el orden alfabético de las palabras.

### Ventajas
Las ventajas principales de los tries sobre los árboles de búsqueda binaria (BST) son:

- Búsqueda de claves más rápida. La búsqueda de una clave de longitud m tendrá en el peor de los casos un coste de O(m). Un BST tiene un coste de O(m log n), siendo n el número de elementos del árbol, ya que la búsqueda depende de la profundidad del árbol, logarítmica con el número de claves.
- Menos espacio requerido para almacenar gran cantidad de cadenas pequeñas, puesto que las claves no se almacenan explícitamente.
- Mejor funcionamiento para el algoritmo de búsqueda del prefijo más largo.

### Código Base
- [Trie Array](https://github.com/PabloAcker/Algoritmica/blob/main/Cap1%20Estructura%20de%20Datos/Trie/trieArray.cpp)
- [Trie Map](https://github.com/PabloAcker/Algoritmica/blob/main/Cap1%20Estructura%20de%20Datos/Trie/trieMap.cpp)

### Complementos del Trie
- Suffix Trie
- Trie Delete

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=AXjmTQ8LEoI&t=1s). Trie Data Structure
- [Video de apoyo 2](https://www.youtube.com/watch?v=6PX6wqDQE20). Basic of trie
- [Conceptos de Trie](https://oiaunlam.wordpress.com/2016/05/02/trie/)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Estructura_de_datos/trie)
