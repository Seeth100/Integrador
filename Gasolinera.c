#include <stdio.h>

int main() {
    int tipoCombustible, billetes50, billetes20, monedas10, monedas5, monedas1, cambio;
    float precioGasolina=23.0;
    float precioDiesel=21.0;
    float litros, costoTotal, pagoCliente;

    printf("Bienvenido a la gasolinera\n");
    printf("Seleccione el tipo de combustible:\n");
    printf("1.Gasolina (23.5 pesos por litro)\n");
    printf("2.Diesel (21.0 pesos por litro)\n");
    printf("Ingrese su opcion (1 o 2): ");
    scanf("%d", &tipoCombustible);

    while (tipoCombustible != 1 && tipoCombustible != 2)
    {
        printf("Opcion no valida, Ingrese la opcion nuevamente (1 o 2): \n");
        scanf("%d", &tipoCombustible);
       
    }
    
    printf("Ingrese la cantidad de litros: ");  
    scanf("%f", &litros);
    while (litros <= 0)
    {
        printf("La cantidad de litros debe ser mayor a 0.\n");
        printf("Ingrese la cantidad de litros: ");
        scanf("%f", &litros);
    }
    
 if (tipoCombustible == 1) {
    costoTotal = litros * precioGasolina;
 } else     
 {
    costoTotal = litros * precioDiesel;
 }
 printf("El costo total es: %.2f pesos\n", costoTotal);

  printf("Pago del cliente: ");
    scanf("%f", &pagoCliente);

 while (pagoCliente < costoTotal)
 {
    if (pagoCliente < costoTotal) {
    printf("Pague la cantidad correcta\n");
    }
    printf("Pago del cliente: ");
    scanf("%f", &pagoCliente);

 }


    cambio=pagoCliente-costoTotal;        
    printf("\nEl cambio es: %d pesos\n", cambio);

    billetes50 = cambio / 50;
    cambio %= 50;

    billetes20 = cambio / 20;
    cambio %= 20;

    monedas10 = cambio / 10;
    cambio %= 10;

    monedas5 = cambio / 5;
    cambio %= 5;

    monedas1 = cambio / 1;
    cambio %= 1;



    printf("Desglose del cambio:\n");
    if (billetes50>0) {
    printf("%d billete(s) de 50 pesos\n", billetes50);
    }
    if (billetes20>0) {
    printf("%d billete(s) de 20 pesos\n", billetes20);
    }
    if (monedas10>0) {
    printf("%d moneda(s) de 10 pesos\n", monedas10);
    }
    if (monedas5>0) {
    printf("%d moneda(s) de 5 pesos\n", monedas5);
    }
    if (monedas1>0) {
    printf("%d moneda(s) de 1 pesos\n", monedas1);
    }

    printf("Gracias por su compra\n");

    return 0;
}