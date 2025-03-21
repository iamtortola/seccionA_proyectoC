#include <stdio.h>

// Tasas de cambio (puedes actualizarlas según sea necesario)
#define QUETZAL_TO_DOLLAR 0.13
#define QUETZAL_TO_EURO 0.12
#define DOLLAR_TO_QUETZAL 7.85
#define DOLLAR_TO_EURO 0.92
#define EURO_TO_QUETZAL 8.50
#define EURO_TO_DOLLAR 1.09

void convertirMoneda(int opcion, float cantidad) {
    float resultado;
    switch (opcion) {
        case 1:
            resultado = cantidad * QUETZAL_TO_DOLLAR;
            printf("%.2f Quetzales son %.2f Dólares.\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * QUETZAL_TO_EURO;
            printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad * DOLLAR_TO_QUETZAL;
            printf("%.2f Dólares son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad * DOLLAR_TO_EURO;
            printf("%.2f Dólares son %.2f Euros.\n", cantidad, resultado);
            break;
        case 5:
            resultado = cantidad * EURO_TO_QUETZAL;
            printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 6:
            resultado = cantidad * EURO_TO_DOLLAR;
            printf("%.2f Euros son %.2f Dólares.\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }
}

int main() {
    int opcion;
    float cantidad;
   
    while (1) {
        printf("\nConversor de Monedas\n");
        printf("1. Quetzales a Dólares\n");
        printf("2. Quetzales a Euros\n");
        printf("3. Dólares a Quetzales\n");
        printf("4. Dólares a Euros\n");
        printf("5. Euros a Quetzales\n");
        printf("6. Euros a Dólares\n");
        printf("7. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
       
        if (opcion == 7) {
            printf("Saliendo del programa...\n");
            break;
        }
       
        printf("Ingrese la cantidad a convertir: ");
        scanf("%f", &cantidad);
       
        convertirMoneda(opcion, cantidad);
    }
   
    return 0;
}

