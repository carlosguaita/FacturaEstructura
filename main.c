#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    struct Factura facturas[5];
    int m=0;
    printf("Ingrese el numero de facturas: ");
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    {
        int n = leerFactura(&facturas[i]);
    }
    imprimirNombreCedulaClientes(facturas,m);
    
    //int n = leerFactura(&factura1);
    //imprimirFactura(&factura1,n);
    return 0;
}