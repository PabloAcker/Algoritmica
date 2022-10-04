# Union Find

### Concepto 
Podemos determinar si dos elementos están en el mismo subconjunto comparando el resultado de dos operaciones Find. Si los dos elementos están en el mismo conjunto, tienen la misma representación; de lo contrario, pertenecen a conjuntos diferentes. Si se llama a la unión de dos elementos, fusione los dos subconjuntos a los que pertenecen los dos elementos.

Union Find es una estructura de datos donde cada conjunto está representado por un árbol de datos en el que cada nodo tiene una referencia a su padre y el representante de cada conjunto es la raíz del árbol de ese conjunto.

- Find sigue a los nodos padre hasta que llega a la raíz.
- Union combina dos árboles en uno uniendo la raíz de un árbol con la raíz del otro.

Por ejemplo, considere cinco conjuntos disjuntos S1, S2, S3, S4, y S5 representado por un árbol, como se muestra en el siguiente diagrama. Cada conjunto contiene inicialmente solo un elemento cada uno, por lo que su puntero principal apunta a sí mismo o NULL.

S1 = {1}, S2 ={2}, S3 = {3}, S4 ={4} and S5 = {5}

los Find operación en el elemento i regresará representante de Si, dónde 1 <= i <= 5, es decir, Find(i) = i.

![image](https://user-images.githubusercontent.com/90888080/193917118-3964423b-9910-4661-a83e-8bbb6e05c089.png)

si lo hacemos Union (S3, S4), S3 y S4 se fusionarán en un conjunto inconexo, S3. Ahora,

S1 = {1}, S2 ={2}, S3 = {3, 4} and S5 = {5}.

Find(4) regresará representante del conjunto S3, es decir, Find(4) = 3

![image](https://user-images.githubusercontent.com/90888080/193917455-7a53f92e-1257-4053-9e7b-170111a05ce6.png)

### Código Base
- [Union Find](https://github.com/PabloAcker/Algoritmica/blob/main/Cap1%20Estructura%20de%20Datos/Union%20Find/unionFind.cpp)

### Complementos del Union Find
- Union Find By Rank

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=ID00PMy0-vE). Union Find By rank
- [Video de apoyo 2](https://www.youtube.com/watch?v=ayW5B2W9hfo). Basic of Union Find
- [Union Find Structure](https://www.techiedelight.com/es/disjoint-set-data-structure-union-find-algorithm/)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Estructura_de_datos/Union_Find)

