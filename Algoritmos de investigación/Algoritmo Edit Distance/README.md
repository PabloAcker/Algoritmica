<h1 align="center"> Edit Distance </h1>

### Concepto 

La distancia de Levenshtein (o distancia de edición) es una forma de cuantificar cuán diferentes son dos strings entre sí contando el número mínimo de operaciones requeridas para transformar una cadena en la otra.

La distancia de Levenshtein entre dos palabras es el número mínimo de ediciones de un solo carácter (es decir, inserciones, eliminaciones o sustituciones) necesarias para cambiar una palabra por otra. Cada una de estas operaciones tiene un coste unitario.

Por ejemplo, la distancia de Levenshtein entre kitten y sitting es 3. El script de edición mínimo que transforma el primero en el último es:

kitten —> sitten (substitution of s for k)
sitten —> sittin (substitution of i for e)
sittin —> sitting (insertion of g at the end)

### Parte práctica:

El problema de la distancia de edición tiene subestructura óptima. Eso significa que el problema se puede dividir en "subproblemas" más pequeños y simples, que se pueden dividir en subproblemas aún más simples, y así sucesivamente, hasta que, finalmente, la solución se vuelve trivial (recursividad).



### Código Base
- [Edit Distance]()

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=71UQH7Pr9kU&t=2s). Basic of Edit Distance.
- [Video de apoyo 2](https://www.youtube.com/watch?v=fAuF0EuZVCk). Edit Distance Structure.
- [Conceptos de Edit Distance](https://es.wikipedia.org/wiki/Algoritmo_de_Kruskal#:~:text=El%20algoritmo%20de%20Kruskal%20es,del%20%C3%A1rbol%20es%20el%20m%C3%ADnimo.)
