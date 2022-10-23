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

Problema: Transformar string X[1…m] dentro Y[1…n] realizando operaciones de edición en la string X.

Subproblema: Transformar subcadena X[1…i] dentro Y[1…j] realizando operaciones de edición en la subcadena X.

Caso 1: Hemos llegado al final de cualquiera de las subcadenas.

Si subcadena X está vacío, inserte todos los caracteres restantes de la subcadena Y dentro X. El costo de esta operación es igual a la cantidad de caracteres que quedan en la subcadena Y.

('', 'ABC') ——> ('ABC', 'ABC') (cost = 3)

Si subcadena Y está vacío, inserte todos los caracteres restantes de la subcadena X dentro Y. El costo de esta operación es igual a la cantidad de caracteres que quedan en la subcadena X.

('ABC', '') ——> ('', '') (cost = 3)

Caso 2: Los últimos caracteres de la subcadena X y Y son lo mismo.

Si los últimos caracteres de la subcadena X y subcadena Y coincide, no es necesario hacer nada, simplemente recurra para la subcadena restante X[0…i-1], Y[0…j-1]. Como no se trata de ninguna operación de edición, el coste será 0.

('ACC', 'ABC') ——> ('AC', 'AB') (cost = 0)

Caso 3: Los últimos caracteres de la subcadena X y Y son diferentes.

Si los últimos caracteres de la subcadena X y Y son diferentes, devuelven el mínimo de las siguientes operaciones:

Inserte el último carácter de Y dentro X. La talla de Y se reduce en 1, y X sigue siendo el mismo. Esto representa X[1…i], Y[1…j-1] a medida que avanzamos en la subcadena de destino, pero no en la subcadena de origen.
 
('ABA', 'ABC') ——> ('ABAC', 'ABC') == ('ABA', 'AB') (using case 2)

Eliminar el último carácter de X. La talla de X se reduce en 1, y Y sigue siendo el mismo. Esto representa X[1…i-1], Y[1…j] a medida que avanzamos en la string de origen, pero no en la string de destino.
 
('ABA', 'ABC') ——> ('AB', 'ABC')

Sustituir (Reemplazar) el carácter actual de X por el carácter actual de Y. El tamaño de ambos X y Y se reduce en 1. Esto explica X[1…i-1], Y[1…j-1] a medida que avanzamos tanto en la string de origen como en la de destino.
 
('ABA', 'ABC') —> ('ABC', 'ABC') == ('AB', 'AB') (using case 2)

Es básicamente lo mismo que el caso 2, donde los dos últimos caracteres coinciden y nos movemos tanto en la string de origen como en la de destino, excepto que cuesta una operación de edición.

### Código Base
- [Edit Distance]()

### Bibliografía
- [Video de apoyo 1](https://www.youtube.com/watch?v=4oTFJOQpmRY). Basic of Edit Distance.
- [Video de apoyo 2](https://www.youtube.com/watch?v=Dd_NgYVOdLk). Edit Distance Structure.
- [Conceptos de Edit Distance](https://www.techiedelight.com/es/levenshtein-distance-edit-distance-problem/)
