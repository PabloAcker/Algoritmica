<h1 align="center"> Búsqueda Binaria </h1>

### Concepto 

La búsqueda binaria es un algoritmo eficiente para encontrar un elemento en una lista ordenada de elementos. Funciona al dividir repetidamente a la mitad la porción de la lista que podría contener al elemento, hasta reducir las ubicaciones posibles a solo una. Usamos la búsqueda binaria en el juego de adivinar en la lección introductoria.
Una de las maneras más comunes de usar la búsqueda binaria es para encontrar un elemento en un arreglo. Por ejemplo, el catálogo estelar Tycho-2 contiene información acerca de las 2,539,913 estrellas más brillantes en nuestra galaxia. Supón que quieres buscar en el catálogo una estrella en particular, con base en el nombre de la estrella. Si el programa examinara cada estrella en el catálogo estelar en orden empezando con la primera, un algoritmo llamado búsqueda lineal, la computadora podría, en el peor de los casos, tener que examinar todas las 2,539,913 de estrellas para encontrar la estrella que estás buscando. Si el catálogo estuviera ordenado alfabéticamente por nombres de estrellas, la búsqueda binaria no tendría que examinar más de 22 estrellas, incluso en el peor de los casos.
Los siguientes artículos discuten cómo describir cuidadosamente el algoritmo, cómo implementar el algoritmo en JavaScript y cómo analizar su eficiencia.

### Ejemplo Básico
La idea principal de la búsqueda binaria es llevar un registro del rango actual de intentos razonables. Digamos que estoy pensando en un número entre uno y 100, justo como en el juego de adivinar. Si ya intentaste decir 25 y te dije que mi número es más grande, y ya intentaste decir 81 y te dije que mi número es más chico, entonces los números en el rango de 26 a 80 son los únicos intentos razonables. Aquí, la sección roja de la recta numérica contiene los intentos razonables, y la sección negra muestra los intentos que hemos descartado:

![image](https://user-images.githubusercontent.com/90888080/196328770-a3407e9e-bf9d-4e65-a978-b0fb14a8500d.png)

En cada turno, haces un intento que divide el conjunto de intentos razonables en dos rangos de aproximadamente el mismo tamaño. Si tu intento no es correcto, entonces te digo si es muy alto o muy bajo, y puedes eliminar aproximadamente la mitad de los intentos razonables. Por ejemplo, si el rango actual de los intentos razonables es de 26 a 80, intentarías adivinar a la mitad del camino, (26 + 80) / 2(26+80)/2left parenthesis, 26, plus, 80, right parenthesis, slash, 2, o 53. Si después te digo que 53 es demasiado alto, puedes eliminar todos los números de 53 a 80, dejando 26 a 52 como el nuevo rango de intentos razonables, reduciendo a la mitad el tamaño del rango.

![image](https://user-images.githubusercontent.com/90888080/196328878-e1f92d1e-f3b9-4b7d-a645-4c177d3a640d.png)

Para el juego de adivinar, podemos llevar un registro del conjunto de intentos razonables al usar unas cuantas variables. Sea la variable minminm, i, n el intento razonable mínimo actual para esta ronda, y sea la variable maxmaxm, a, x el intento razonable máximo actual. La entrada (o input en inglés) al problema es el número nnn, el mayor número posible que tu oponente está pensando. Suponemos que el menor número posible es uno, pero sería fácil modificar el algoritmo para tener el menor número posible como una segunda entrada.

### Código Base
- [Búsqueda Binaria](https://github.com/PabloAcker/Algoritmica/blob/main/Cap3%20Programaci%C3%B3n%20Din%C3%A1mica/B%C3%BAsqueda%20Binaria/busquedaBinaria.cpp)

### Bibliografía
- [Video de apoyo](https://www.youtube.com/watch?v=fDKIpRe8GW4). Basic of Binary Search
- [Conceptos de Búsqueda Binaria](https://es.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search#:~:text=La%20b%C3%BAsqueda%20binaria%20es%20un,ubicaciones%20posibles%20a%20solo%20una.)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Busqueda_Binaria)
