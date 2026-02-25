#include <stdio.h>
#include <stdlib.h>  // Para abs()

int main() {

    int x1, x2, x3;
    int valido = 0;

    // Validar x1 
    while (!valido) {
        printf("Ingrese el 1er numero entero (x1): ");
        
        if (scanf("%d", &x1) != 1) {
            while (getchar() != '\n'); 
             // limpiar 
            printf("Error: Debe colocar un numero que sea entero.\n");
        } else {
            valido = 1;
        }
    }

    // Validar x2 
    valido = 0;
    while (!valido) {
        printf("Ingrese el 2do numero entero (x2): ");
        
        if (scanf("%d", &x2) != 1) {
            while (getchar() != '\n');
            printf("Error: Debe colocar un numero que sea entero.\n");
        } else {
            valido = 1;
        }
    }

    // Validar x3
    valido = 0;
    while (!valido) {
        printf("Ingrese el 3er numero entero (x3): ");
        
        if (scanf("%d", &x3) != 1) {
            while (getchar() != '\n');
            printf("Error: Debe colocar un numero que sea entero.\n");
        } else {
            valido = 1;
        }
    }

    // Comparaciones 
    printf("\n--- Resultados de comparaciones ---\n");

    if (x1 == x2 && x2 == x3)
        printf("LOS TRES NUMEROS SON IGUALES.\n");
    else
        printf("LOS TRES NUMEROS NO SON IGUALES.\n");

    if (x1 > x2)
        printf("x1 es mayora x2.\n");
    else
        printf("x1 NO es mayor a x2.\n");

    if (x1 > x3)
        printf("x1 es mayor a x3.\n");
    else
        printf("x1 NO es mayor a x3.\n");

    if (x2 == x3)
        printf("x2 es igual a x3.\n");
    else
        printf("x2 NO es igual a x3.\n");

    if (x2 > x1)
        printf("x2 es mayor a x1.\n");
    else
        printf("x2 NO es mayor a x1.\n");

    // Cálculo, valor total
    printf("\n--- Modulos (valor absoluto) ---\n");
    printf("Modulo de x1: %d\n", abs(x1));
    printf("Modulo de x2: %d\n", abs(x2));
    printf("Modulo de x3: %d\n", abs(x3));

    return 0;
}
