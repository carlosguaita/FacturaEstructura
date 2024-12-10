#include <stdio.h>
#include <string.h>
#include "funciones.h"

int leerFactura(struct Factura *factura){
    int n=0;
    int len;
    float total=0;
    printf("Ingrese el nombre del cliente: ");
    fflush(stdin);
    fgets(factura->nombre,20,stdin);
    len = strlen(factura->nombre) -1;
    factura->nombre[len]='\0';
    printf("Ingrese la cedula del cliente: ");
    scanf("%d",&factura->cedula);
    printf("Ingrese el numero de productos a facturar: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el nombre del producto %d: ",i+1);
        fflush(stdin);
        fgets(factura->productos[i].nombre,50,stdin);
        len = strlen(factura->productos[i].nombre) -1;
        factura->productos[i].nombre[len]='\0';
        printf("Ingrese el precio del producto %d: ",i+1);
        scanf("%f",&factura->productos[i].precio);
        printf("Ingrese la cantidad del producto %d: ",i+1);
        scanf("%d",&factura->productos[i].cantidad);
        total+= factura->productos[i].cantidad * factura->productos[i].precio;
    }
    factura->total=total;
    //printf("Ingrese el total de la factura: ");
    //scanf("%lf",&factura->total);
    return n;
}

void imprimirFactura(struct Factura *factura, int n){
    printf("Nombre: %s\n",factura->nombre);
    printf("Cedula: %d\n",factura->cedula);
    printf("Productos: \n");
    printf("Nombre\t\tCantidad\t\tPrecio\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%f\n",factura->productos[i].nombre,
                                  factura->productos[i].cantidad,
                                  factura->productos[i].precio);
    }
    printf("Total: %.2lf",factura->total);
}

void imprimirNombreCedulaClientes(struct Factura facturas[5], int n){
    printf("Cedula\t\tNombre\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\n",facturas[i].cedula,facturas[i].nombre);
    }
}