# Matriz3d4d

Implementar una clase matriz 3D de números enteros.
El control práctico de programación requiere que el alumno defina una clase Matriz_3D , en donde las características que se requieren son:


El tamaño de la matriz será definido por el usuario antes de crearla, ósea la clase debera tener un constructor que reciba estos parametros, para que se pueda definir de forma dinámica. Por ser una matriz de 3 dimensiones debera crearse un puntero int *** para almacenar las informaciones de la matriz 3D.


Deberá crearse un destructor para liberar la matriz de tipo int***.
Las dimensiones del objeto matriz 3D que se debe crear para validar su implementación deben tener las siguientes dimensiones: [ 3[4] 2 ]

La inicialización de los valores de la matriz tendrá dos formas, una por defecto (default) con sus valores iguales a 0 y una segunda donde los valores deberan ser creados de forma aleatoria.  



Deberá tener metodos que permitan:



- Suma de dos matrices, C ijk = A ijk + B ijk.



- Obtener el menor y el mayor elemento de la matriz.



- Obtener los indices (i,j,k) de un elemento específico en la matriz.


- Ingresar un valor específico en una posición específica de la matriz ( i,j,k -> M[ i ][ j ][ k ] = x )
Permite copiar un objeto matriz hacia otro.
Imprimir los valores dentro de la matriz.

Finalmente, deberá crear la clase Matriz_4D que herede de Matriz_3D. Esta matriz derivada debera tener un atributo de tipo int * para almazenar valores para una cuarta coordenada, debera reservar memoria dentro de esta clase derivada para este nuevo atributo. 


Esta clase derivada podra acceder a los atributos de su clase base, para poder tener este acceso usar el modificador adecuado en la clase base al momento de definir los atributos de la clase base.
Tanto el contructor y destructor de la clase derivada debera reservar y liberar la memoria del atributo int * de la clase derivada.