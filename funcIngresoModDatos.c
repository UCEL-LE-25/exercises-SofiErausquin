#include <stdio.h>
#include "bibIngresoModDatos.h"

void mostrarSectores(){
    printf("1. ADMINISTRACION.\n");
    printf("2. TÉCNICA.\n");
    printf("3. RECURSOS HUMANOS.\n\n");
    printf("Indique en que sector se encuantra (1,2 0 3): ");
}

void modificarEstado(struct Impresora sector[]){
    int nroImp;
    do
    {
        printf("Indique a que impresora quiere cargar o cambiarle el estado (1-4).\n");
        printf("O ingrese 0 si no quiere cargar mas: ");
        scanf("%d", &nroImp);
        if (nroImp > 0 && nroImp <= 4) {
            int nuevoEstado;
            printf("Ingrese el estado de la impresora, 1 'ACTIVA' o 0 'INACTIVA': ");
            scanf("%d", &nuevoEstado);

            if (nuevoEstado == 0 || nuevoEstado == 1) {
            sector[nroImp - 1].estado = nuevoEstado;
            } else {
            printf("Estado inválido. Solo se permite 1 (ACTIVA) o 0 (INACTIVA).\n");
            }
        } else if (nroImp != 0) {
            printf("El nro de impresora que ingreso no es uno del 1 al 4.\n");
        }
        } while (nroImp != 0);
    }
void cargarEstado(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]){
    int sector;
    mostrarSectores();
    scanf("%d",&sector);
    switch (sector){
    case 1:
        modificarEstado(admin);

        break;
    case 2:
        modificarEstado(tec);

        break;
    case 3:
        modificarEstado(rrhh); 

        break;  

    default:
        printf("Opcion fuera de rango.\n");
        break;
    }

}
void cargarPaginasImpresas(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]){
    int sector;
    mostrarSectores();
    scanf("%d",&sector);
    switch (sector)
    {
    case 1:
        cargarPag(admin);
        break;
    case 2:
        cargarPag(tec);
        break;
    case 3:
        cargarPag(rrhh);
        break;
    default:
        break;
    }
}
void cargarPag(struct Impresora sector[]){
    int nroImp;
    do
    {
        printf("Indique a que impresora quiere cargarle paginas impresas (1-4).\n");
        printf("O ingrese 0 si no quiere cargar mas: ");
        scanf("%d", &nroImp);
        if (nroImp > 0 && nroImp <= 4) {
            printf("Ingrese la cantidad de páginas impresas para la impresora %d: ", nroImp);
            scanf("%d", &sector[nroImp - 1].cantidadImpresas);
        } else if (nroImp != 0) {
            printf("El nro de impresora que ingreso no es uno del 1 al 4.\n");
        }
    } while (nroImp != 0);
}
