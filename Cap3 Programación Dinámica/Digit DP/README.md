<h1 align="center"> Digit DP </h1>

### Concepto 

Hay muchos tipos de problemas que piden contar el número de enteros ' x ' entre dos enteros, digamos ' a ' y ' b ' tales que x satisface una propiedad específica que se puede relacionar con sus dígitos.
Entonces, si decimos que G(x) indica el número de tales enteros entre 1 y x (inclusive), entonces el número de tales enteros entre a y b puede ser dado por G(b)-G(a-1). Aquí es cuando Digit DP (Programación Dinámica) entra en acción. Todos los problemas de conteo de enteros que satisfacen la propiedad anterior se pueden resolver mediante el método de DP de dígitos.

### Concepto clave
- Sea el número dado x tiene n dígitos. La idea principal de digit DP es representar primero los dígitos como una matriz de dígitos t[]. Digamos que tenemos t n t n-1 t n-2 … t 2 t 1 como la representación decimal donde t i (0 < i <= n) indica el i-ésimo dígito desde la derecha. El dígito más a la izquierda t n es el dígito más significativo. 
 
- Ahora, después de representar el número dado de esta manera, generamos los números menores que el número dado y simultáneamente calculamos usando DP, si el número satisface la propiedad dada. Comenzamos generando números enteros con un número de dígitos = 1 y luego hasta un número de dígitos = n. Los enteros que tienen menos dígitos que n se pueden analizar estableciendo los dígitos más a la izquierda en cero. 

### Complejidad del tiempo:
Hay un total de estados idx*sum*tight y estamos realizando de 0 a 9 iteraciones para visitar cada estado. Por lo tanto, la complejidad del tiempo será O(10*idx*sum*tight) . Aquí, observamos que tight = 2 e idx pueden tener un máximo de 18 para un entero sin signo de 64 bits y, además, la suma será un máximo de 9*18 ~ 200. Por lo tanto, en general tenemos 10*18*200*2 ~ 10^5 iteraciones que se puede ejecutar fácilmente en 0,01 segundos .
El problema anterior también se puede resolver usando recursividad simple sin ninguna memorización.

![image](https://user-images.githubusercontent.com/90888080/196320812-581ade15-b3ac-4467-a81d-83d21efd0bcf.png)

### Código Base
- [Digit DP]()

### Bibliografía
- [Video de apoyo 1](). Digit DP Structure
- [Video de apoyo 2](). Basic of Digit DP
- [Conceptos de Digit DP](https://www.geeksforgeeks.org/digit-dp-introduction/)
- [Paul Landaeta: Github Algorítmica2](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Programacion%20Dinamica/Digit)
