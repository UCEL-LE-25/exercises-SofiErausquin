#include <stdio.h>
#include "bibIngresoModDatos.h"
#include "bibCantPaginasImpresas.h"
#include "bibImpActivasXsector.h"


int main(){
    struct Impresora admin[4], tec[4], rrhh[4];
    /*INICIALIZACION DE LAS ESTRUCTURAS EN CERO*/
    for (int i = 0; i < 4; i++) {
        admin[i].estado = 0;
        admin[i].cantidadImpresas = 0;

        tec[i].estado = 0;
        tec[i].cantidadImpresas = 0;

        rrhh[i].estado = 0;
        rrhh[i].cantidadImpresas = 0;
    }
    int option;
    do {
        printf("\n\n1. Cargar estado de impresora.\n");
        printf("2. Cargar cantidad de paginas impresas por impresora.\n");
        printf("3. Consultar cuántas páginas imprimió cada sector.\n");
        printf("4. Consultar sector que mas paginas imprimió.\n");
        printf("5. Consultar cuántas impresoras activas hay por sector\n");
        printf("0. Salir.\n\n");
        printf("Ingrese el nro de la opcion que quiere ejecutar: ");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            cargarEstado(admin, tec, rrhh);
            break;
        case 2:
            cargarPaginasImpresas(admin, tec, rrhh);
            break;
        case 3:
            consultarPaginasImpresas(admin, tec, rrhh);
            break;
        case 4:
            sectorQmasImprimio(admin, tec, rrhh);
            break;
        case 5:
            impActivasXsector(admin, tec, rrhh);
            break;
        case 0:
            printf("\nFIN EJECUCION.\n\n");
            break;
        
        default:
            printf("\nOpcion fuera de rango.\n\n");

            break;
        }
    } while (option!=0 );

}



