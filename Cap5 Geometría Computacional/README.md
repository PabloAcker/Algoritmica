<h1 align="center"> Geometría computacional </h1>

### Concepto 
La geometría computacional es una rama de las ciencias de la computación dedicada al estudio de algoritmos que pueden ser expresados en términos de la geometría. Algunos de los problemas puramente geométricos surgen del propio estudio de dichos algoritmos, y este tipo de problemas también se considera parte de la geometría computacional.

Se trata, como dicen algunos autores, de la conjunción de la Geometría Clásica con la Informática. Partiendo de la abstracción de problemas de otras áreas (tales como diseño asistido, robótica, CAD/CAM, bases de datos o incluso biología molecular), la GC trata de desarrollar herramientas y técnicas para resolver problemas de naturaleza, principalmente, geométrica, con especial énfasis en el diseño eficiente de algoritmos y estructura de datos.

Fue bautizada en 1975 por Michael Shamos al acuñar este término por primera vez en el título de su tesis doctoral, dirigida por Franco Preparata. El libro de ambos, [Preparata], por cierto, es para muchos de los que nos dedicamos a esto uno de nuestros manuales de cabecera. No obstante, hay publicados trabajos enmarcados dentro del área muy anteriores, sólo que no se les había catalogado aún.

Para explicar de forma más gráfica cómo respira la GC, vamos a ver cómo es el camino que va desde la matemática continua abstracta al diseño de un algoritmo capaz de resolver el problema con nuestra máquina: el ordenador. Para ello, vamos a plantear un problema: el cálculo de la envolvente convexa de un conjunto finito de puntos en el plano.

Un conjunto en el plano es convexo si contiene al segmento que une a cualquier pareja de puntos contenidos en él.

![image](https://user-images.githubusercontent.com/90888080/199369662-c6adc5cc-b7bd-4b0b-8314-e8cc0b8375d6.png)

Dado un conjunto P de puntos en el plano, definimos la envolvente convexa de P, y la llamamos EC(P), como el menor conjunto convexo que lo contiene:

![image](https://user-images.githubusercontent.com/90888080/199370077-2d53ace4-2336-4ddf-81af-bd55d71665a4.png)

Se trata, por lo tanto, de, dado un conjunto de N puntos P_i=(x_i,y_i), con i=1,...,N, enseñar al ordenador a calcular la envolvente convexa, como la vemos en la figura anterior.

Evidentemente, la definición no nos sirve para el diseño del algoritmo. No podemos pensar en calcular todos los conjuntos convexos que contienen a P y quedarnos con el más pequeño por varias razones. La primera es ¡que hay infinitos! Por lo tanto, el primer paso será acabar con esa infinitud, esto es, tratar de utilizar otras aproximaciones que nos den, al menos, la posibilidad de elegir entre un número finito de conjuntos convexos.

Usemos nuestra intuición geométrica. Si pensamos que sobre cada punto de P clavamos (no del todo) un clavo, la frontera de la EC(P) sería la forma que adoptaría una goma elástica al soltarla alrededor de ellos, ¿verdad? Pues bien, ya tenemos una primera idea para acabar con la infinitud inicial: la EC(P) (concretamente, su frontera, pero vamos a abusar un poco del lenguaje) será un polígono convexo y simple (cada dos lados o se cortan en un vértice o no se cortan) cuyos vértices son puntos de P. Habría que determinar:

- ¿Cuáles son los puntos de P que forman parte de EC(P)?

- ¿En qué orden están para definir el polígono? (Un conjunto de k puntos puede definir más de un polígono simple)

Para ver de mejor manera la demostración del algoritmo de Convex Hull de Andrew's monotone chain podemos ver el siguiente video:
[Convex Hull Andrew's monotone chain](https://www.youtube.com/watch?v=dw120YcIav8)

### Ejemplos de casos de la vida real
- Tu primo, Jose, quiere abrir una cadena de tiendas de videojuegos en la región, pero quiere hacerlo, lógicamente, lo mejor posible. Dado que ya existe otra cadena de la competencia, y suponiendo que la gente suele preferir la que está más cerca, porque los precios serán más o menos iguales y los juegos idénticos, Jose te pide que le sitúes sus tiendas para que el área de influencia de las mismas, sea mayor que la de la competencia.

![image](https://user-images.githubusercontent.com/90888080/199371137-e8621ec3-b91d-4fa5-96eb-6a151bcfbc44.png)

- Por otra parte, tu suegro está terminando de montar una sala de conferencias en su nuevo hotel y necesita saber dónde colocar la pantalla para que el orador sea visto por el mayor número de asistentes. Eso sí, nada de salas rectangulares ni siquiera con planta poligonal regular, que tu suegro es muy moderno y ha diseñado algo inspirado en esto:

![image](https://user-images.githubusercontent.com/90888080/199371163-50bd416b-cd26-48d6-a60b-6f8914c619f1.png)

- Ah, y de parte de tu suegra, que a ver si pasas por la peluquería nueva para colocar los focos nuevos de forma que iluminen la sala lo mejor posible, con el menor número de focos, que los que sobren se los llevará para la playa.

- En otro mensaje, tienes los datos que te manda un colega tuyo, topógrafo y romántico, que ha estado midiendo en la sierra de su pueblo el entorno de la casa de sus abuelos, porque quiere que un arquitecto le diseñe la cubierta de su nuevo chalet en la playa, imitando la orografía de ese paisaje de infancia:

![image](https://user-images.githubusercontent.com/90888080/199371102-fbb0263b-0408-4a8d-a565-4b396bc3a084.png)

### Código Base
- [Geometría computacional](https://github.com/PabloAcker/Algoritmica/blob/main/Cap5%20Geometr%C3%ADa%20Computacional/geometria.cpp)

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=Vu84lmMzP2o&t=744s). Basic of Geometría computacional.
- [Video de apoyo 2](https://www.youtube.com/watch?v=fTqPVjy0rzU). Geometría computacional Structure.
- [Video de apoyo 3](https://www.youtube.com/watch?v=QGaZ3SJUG9w). Video en español.
- [Video de apoyo 4](https://www.youtube.com/watch?v=dw120YcIav8). Convex Hull Andrew's monotone chain.
- [Conceptos de Geometría computacional](https://es.wikipedia.org/wiki/Geometr%C3%ADa_computacional#:~:text=%E2%80%8B%E2%80%8B,gr%C3%A1ficos%20por%20ordenador%20o%20CAD.)
- [Conceptos de Geometría computacional](https://www.gaussianos.com/una-interesante-introduccion-a-la-geometria-computacional/)
- [Conceptos de Geometría computacional](http://www.elsevier.com/wps/find/journaleditorialboard.cws_home/505629/editorialboard)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Geometria)
