#include <stdio.h>

int main() {
    int tipoCombustible, billetes50, billetes20, monedas10, monedas5, monedas1, monedas50cent, monedas05cent, monedas1cent;
    int cambioCentavos;
    float precioGasolina = 23.0;
    float precioDiesel = 21.0;
    float litros, costoTotal, pagoCliente;

    printf("Bienvenido a la gasolinera\n");
    printf("Seleccione el tipo de combustible:\n");
    printf("1. Gasolina (23.0 pesos por litro)\n");
    printf("2. Diesel (21.0 pesos por litro)\n");
    printf("Ingrese su opcion (1 o 2): ");
    scanf("%d", &tipoCombustible);

    while (tipoCombustible != 1 && tipoCombustible != 2) {
        printf("Opcion no valida, ingrese la opcion nuevamente (1 o 2): ");
        scanf("%d", &tipoCombustible);
    }

    printf("Ingrese la cantidad de litros: ");
    scanf("%f", &litros);
    while (litros <= 0) {
        printf("La cantidad de litros debe ser mayor a 0.\n");
        printf("Ingrese la cantidad de litros: ");
        scanf("%f", &litros);
    }

    if (tipoCombustible == 1) {
        costoTotal = litros * precioGasolina;
    } else {
        costoTotal = litros * precioDiesel;
    }
    printf("El costo total es: %.2f pesos\n", costoTotal);

    printf("Pago del cliente: ");
    scanf("%f", &pagoCliente);

    while (pagoCliente < costoTotal) {
        printf("Pague la cantidad correcta\n");
        printf("Pago del cliente: ");
        scanf("%f", &pagoCliente);
    }

    cambioCentavos = ((pagoCliente - costoTotal) * 100);
    printf("\nEl cambio es: %.2f pesos\n", cambioCentavos / 100.0);

    billetes50 = cambioCentavos / 5000;
    cambioCentavos %= 5000;

    billetes20 = cambioCentavos / 2000;
    cambioCentavos %= 2000;

    monedas10 = cambioCentavos / 1000;
    cambioCentavos %= 1000;

    monedas5 = cambioCentavos / 500;
    cambioCentavos %= 500;

    monedas1 = cambioCentavos / 100;
    cambioCentavos %= 100;

    monedas50cent = cambioCentavos / 50;
    cambioCentavos %= 50;

    monedas05cent = cambioCentavos / 5;
    cambioCentavos %= 5;

    monedas1cent = cambioCentavos / 1;
    cambioCentavos %= 1;

    printf("Desglose del cambio:\n");
    if (billetes50 > 0) {
        printf("%d billete(s) de 50 pesos\n", billetes50);
    }
    if (billetes20 > 0) {
        printf("%d billete(s) de 20 pesos\n", billetes20);
    }
    if (monedas10 > 0) {
        printf("%d moneda(s) de 10 pesos\n", monedas10);
    }
    if (monedas5 > 0) {
        printf("%d moneda(s) de 5 pesos\n", monedas5);
    }
    if (monedas1 > 0) {
        printf("%d moneda(s) de 1 peso\n", monedas1);
    }
    if (monedas50cent > 0) {
        printf("%d moneda(s) de 0.50 pesos\n", monedas50cent);
    }
    if (monedas05cent > 0) {
        printf("%d moneda(s) de 0.05 pesos\n", monedas05cent);
    }
    if (monedas1cent > 0) {
        printf("%d moneda(s) de 0.01 pesos\n", monedas1cent);
    }

    printf("Gracias por su compra\n");

    return 0;
}
