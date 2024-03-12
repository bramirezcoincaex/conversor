#include <stdio.h>

int main() {
    float cantidad, resultado;
    int opcion;

    printf("Bienvenido al conversor de monedas\n");
    printf("Por favor ingrese la cantidad de dinero: ");
    scanf("%f", &cantidad);

    printf("Seleccione la moneda de origen:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares estadounidenses\n");
    printf("3. Euros\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            // Convertir de Quetzales a otras monedas
            resultado = cantidad / 7.75; // Tasa de cambio a dólares
            break;
        case 2:
            // Convertir de Dólares a otras monedas
            resultado = cantidad * 7.75; // Tasa de cambio a quetzales
            break;
        case 3:
            // Convertir de Euros a otras monedas
            resultado = cantidad * 1.12; // Tasa de cambio a dólares
            resultado = resultado * 7.75; // Tasa de cambio a quetzales
            break;
        default:
            printf("Opción no válida\n");
            return 1;
    }

    printf("Seleccione la moneda de destino:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares estadounidenses\n");
    printf("3. Euros\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            // Convertir a Quetzales
            printf("Cantidad en Quetzales: %.2f\n", resultado);
            break;
        case 2:
            // Convertir a Dólares estadounidenses
            printf("Cantidad en Dólares: %.2f\n", resultado);
            break;
        case 3:
            // Convertir a Euros
            resultado = resultado / 7.75; // Tasa de cambio a quetzales
            resultado = resultado / 1.12; // Tasa de cambio a euros
            printf("Cantidad en Euros: %.2f\n", resultado);
            break;
        default:
            printf("Opción no válida\n");
            return 1;
    }

    return 0;
}