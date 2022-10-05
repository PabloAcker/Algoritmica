<h1 align="center"> BIT </h1>

### Concepto 
Los nodos hojas del índice están almacenados en un orden aleatorio, es decir su posición en el disco no corresponde a la posición lógica según el orden del índice. Es lo mismo que una guía telefónica con las hojas mezcladas. Si buscas “Sánchez” pero primero abres la guía telefónica por “Rodríguez”, nada nos asegura que Rodríguez siga a Sánchez. Una base de datos necesita una segunda estructura para encontrar rápidamente los datos dentro de las hojas mezcladas: un árbol de búsqueda equilibrado, o sea, un BIT.

El Binary Indexed Tree es una estructura de datos que almacena los resultados de un operación determinada en un intérvalo [0..j]. Esto con el propósito de solamente tener que obtener el resultado de la operación inversa entre los intérvalos [0..i] y [0..j] para poder obtener el resultado de la operación para el intérvalo [i..j].

Si bien se le dice "árbol binario indexado", en realidad el árbol como tal no existe, todos los datos en realidad están guardados en un array. Además, a diferencia de la estructura Segment Tree, no guardamos todos los valores del conjunto dado, priorizamos el almacenamiento de la operación realizada en intérvalos de tamaños mayores a 1.

![image](https://user-images.githubusercontent.com/90888080/193952865-fe16a8a2-8142-4b76-b3b0-06839317c971.png)

Esta imagen muestra un ejemplo de un índice con 30 entradas. La lista doblemente enlazada establece el orden lógico entre los nodos hojas. La raíz y sus ramas permiten hacer una búsqueda rápida entre los nodos hojas.

En la ilustración destaca el nodo rama y sus nodos hojas a los que hace referencia. Cada entrada del nodo rama corresponde al valor más grande respecto a su nodo hoja. Por ejemplo, el valor más grande en el primer nodo hoja es 46, que está almacenado en su propia entrada del nodo rama. Lo mismo sucede para todos los nodos hojas, que al final de su nodo rama tienen los valores 46, 53, 57 y 83. De acuerdo con este plan, un nivel de rama está construido hasta que todos los nodos hojas estén cubiertos por un nodo rama.

El siguiente nivel está construido de manera similar, pero encima del primer nivel de rama. Se repite este procedimiento hasta que todas las llaves llenan un único nodo, el nodo raíz. La estructura es un árbol de búsqueda equilibrado porque la profundidad del árbol es idéntica en cada posición; la distancia entre el nodo raíz y los nodos hojas es idéntica en todas las partes del árbol.

Una vez creado el índice, la base de datos lo mantiene automáticamente. Se aplican cada insert, delete y update al índice y se conserva el árbol equilibrado, lo que genera una sobrecarga de mantenimiento para las operaciones de escritura. 

*Recorrido*

![image](https://user-images.githubusercontent.com/90888080/193953002-1beaaaa6-8a2e-44f0-a181-2664215de643.png)

La anterior imagen es una muestra de un fragmento de un índice para ilustrar la búsqueda de la llave “57”. El recorrido del árbol empieza desde el nodo raíz del lado izquierdo. Cada entrada esta procesada en el orden ascendente hasta encontrar un valor superior o igual (>=) al valor buscado (57). En esta ilustración, se trata del valor 83. La base de datos sigue la referencia sobre el nodo rama correspondiente y repite el proceso hasta que el recorrido del árbol alcanza un nodo hoja.

El recorrido del árbol es una operación muy eficiente. De hecho es tan eficiente que me refiero a ella como la primera potencia de la indexación. Funciona de manera casi instantánea incluso con grandes volúmenes de datos. Ello se debe principalmente a la característica equilibrada del árbol, lo que permite tener acceso a todos los elementos con el mismo número de etapas, y en segundo lugar, al crecimiento logarítmico de la profundidad del árbol. Eso significa que la profundidad del árbol crece lentamente en comparación al número de hojas. Hay índices reales con millones de registros que tienen una profundidad de cuatro o cinco. Es poco común encontrar una profundidad de seis. El apartado sobre la “Escalabilidad logarítmica” lo describe más en detalle.

### Código Base
- [BIT](https://github.com/PabloAcker/Algoritmica/blob/main/Cap1%20Estructura%20de%20Datos/BIT/bit.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=DPiY9wFxGIw&t=1s). Binary Index Trees
- [Video de apoyo 2](https://www.youtube.com/watch?v=WbafSgetDDk). Basic of BIT
- [BIT structure](https://use-the-index-luke.com/es/sql/i%CC%81ndice-anatomi%CC%81a/b-tree)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Estructura_de_datos/BIT)
