<h1 align="center"> Segment Tree </h1>

### Concepto 
El Segment Tree es una estructura de datos muy versátil que sirve para responder varias consultas de agregación tipo máximo, mínimo, sumas, promedio, multiplicaciones y otras menos estándar, en tiempo log N para un universo de N elementos. Típicamente el Segment Tree se construye para responder consultas sobre un arreglo (como "entrégame el mínimo valor entre los índices i y j del arreglo"). También se pueden hacer actualizaciones de elementos de ese arreglo que tardan tiempo log N. Si tenemos entonces un problema donde hay Q consultas (preguntas por rango y actualizaciones de elementos) sobre un arreglo de largo N, el tiempo total de la solución con Segment Tree será Ο(Q log N) más el tiempo de construcción inicial del Segment Tree (que se puede lograr en Ο(N log N)).

La Imagen 1 muestra el árbol binario a generar si se tuviese n=8. Nótese que las hojas del árbol son los subintervalos con una sola componente.

![image](https://user-images.githubusercontent.com/90888080/193922472-5f0f6ff4-8436-4621-a505-1e4bfd4c335b.png)

Tras generar el árbol binario podemos expresar un subintervalo V[i,j] como la unión del menor número de subintervalos como los preprocesados previamente. Tiene sentido hablar de esta unión pues siempre existe (basta expresar V[i,j] como unión de sus componentes). Por ejemplo, para n=8 se tiene:

V[2,7]=V[2,2]++V[3,4]++V[5,6]++V[7,7]

Si la información que deseamos consultar puede obtenerse a partir de la información de una partición de subintervalos entonces habremos resuelto el problema. Este es el caso del range minimum query. El mínimo del subintervalo V[i,j] es el mínimo de los mínimos obtenidos para los subintervalos preprocesados que formen una partición de V[i,j]. Por ejemplo, si V=[3,2,8,5,6,1,7,4]:

min(V[2,7])=min{min(V[2,2]),min(V[3,4]),min(V[5,6]),min(V[7,7])}=min{2,5,1,7}=1

*Nodos del segment tree*

La información relativa a los subintervalos del tipo V[k2l,(k+1)2l−1] debe almacenarse en un nodo. Los subintervalos V[i,i] son los casos base y sus nodos formarán las hojas del segment tree. Los nodos deben mantener 3 operaciones:

- Asignar la información correspondiente al nodo en el caso de que este sea una hoja del árbol.
- Generar la información del nodo a partir de dos nodos cuyos subintervalos sean una partición del subintervalo actual. Esta operación se denomina merge.
- Devolver la información del subintervalo que el nodo representa.

### Código Base
- [Segment Tree](https://github.com/PabloAcker/Algoritmica/blob/main/Cap1%20Estructura%20de%20Datos/Segment%20Tree/segmentTree.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=2FShdqn-Oz8). Segment Tree Introduction
- [Video de apoyo 2](https://www.youtube.com/watch?v=Ic7OO3Uw6J0&t=1s). Basic of Segment Tree
- [Página de Programación Competitiva Chile](https://progcomp.cl/segmenttree)
- [Segent Tree Structure](https://libreim.github.io/blog/2015/07/17/segment-tree/)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Estructura_de_datos/Segment_tree)
