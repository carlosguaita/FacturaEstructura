struct Producto
{
    char nombre[50];
    float precio;
    int cantidad;
};


struct Factura
{
    char nombre[50];
    int cedula;
    struct Producto productos[5];
    double total;
};
int leerFactura(struct Factura *factura);
void imprimirFactura(struct Factura *factura, int n);
void imprimirNombreCedulaClientes(struct Factura facturas[5], int n);
