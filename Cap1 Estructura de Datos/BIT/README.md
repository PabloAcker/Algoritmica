<h1 align="center"> BIT </h1>

### Concepto 
El Binary Indexed Tree (BIT) o Fenwick Tree (por Peter Fenwick) es una estructura de datos que permite modificaciones y consultas en O(logn), siendo n la cantidad de elementos de referencia en la estructura (sea a el arreglo con todos esos elementos). Toma como referencia una función asociativa f y calcula respuestas parciales para optimizar el tiempo de consulta y de modificación.

El BIT de manera natural permite almacenar y consultar datos respecto a un prefijo de a en el caso general si las actualizaciones son sobreescribibles; sin embargo, si f es invertible, entonces el BIT permite consultar cualquier rango de los elementos almacenados considerando que:

al⊕al+1⊕…⊕ar=f−1(a1⊕…⊕ar,a1⊕…⊕al−1)

Consideraremos que las respuestas parciales de la estructura serán almacenadas en un arreglo ft. La cantidad de memoria que necesita el BIT es O(n), siendo más específicos, necesitaría una cantidad cercada a n+1 estructuras del mismo tipo que los elementos de a.

El Binary Indexed Tree es una estructura de datos que almacena los resultados de un operación determinada en un intérvalo [0..j]. Esto con el propósito de solamente tener que obtener el resultado de la operación inversa entre los intérvalos [0..i] y [0..j] para poder obtener el resultado de la operación para el intérvalo [i..j].

Si bien se le dice "árbol binario indexado", en realidad el árbol como tal no existe, todos los datos en realidad están guardados en un array. Además, a diferencia de la estructura Segment Tree, no guardamos todos los valores del conjunto dado, priorizamos el almacenamiento de la operación realizada en intérvalos de tamaños mayores a 1.

*¿Cómo guardar y consultar los datos?*

Lo que propone el BIT es almacenar en la posición pos el resultado de todos los elementos en el rango [pos−LSO(pos)+1,pos], donde LSO(pos) es el Least Significant One de pos, el cual es la máxima potencia de 2 tal que pos es divisible por ella

Ahora, asumiendo que mantenemos dicha forma de almacenar los datos, es sencillo notar que para obtener el resultado de todos los elementos del rango [1,pos] basta con usar la siguiente iteración:

node getPrefix(int pos){
    if(pos == 0) return Neutro; // Elemento neutro porque no hay elementos en [1, 0]
    return f(getPrefix(pos - LSO(pos)), ft[pos]); // Quitamos el LSO, obtenemos su respuesta y operamos con ft[pos]
}

Teorema: El algoritmo getPrefix(pos) obtiene adecuadamente la respuesta de los elementos en el rango [1,pos] para todo pos=0,1,…,n, siendo la respuesta para pos=0 el elemento neutro de la función f.

![image](https://user-images.githubusercontent.com/90888080/193960020-818acd7c-343c-455c-a5ee-79650a3522be.png)


### Código Base
- [BIT](https://github.com/PabloAcker/Algoritmica/blob/main/Cap1%20Estructura%20de%20Datos/BIT/bit.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=DPiY9wFxGIw&t=1s). Binary Index Trees
- [Video de apoyo 2](https://www.youtube.com/watch?v=WbafSgetDDk). Basic of BIT
- [BIT structure](https://use-the-index-luke.com/es/sql/i%CC%81ndice-anatomi%CC%81a/b-tree)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Estructura_de_datos/BIT)
