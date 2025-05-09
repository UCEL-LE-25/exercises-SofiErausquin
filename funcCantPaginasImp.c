#include <stdio.h>
#include "bibIngresoModDatos.h"
#include "bibCantPaginasImpresas.h"

void sumarTotalImpreso(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[],
int *cantAdm, int *cantTec, int *cantRRHH){
    for (int i = 0; i < 4; i++) {
        *cantAdm += admin[i].cantidadImpresas;
        *cantTec += tec[i].cantidadImpresas;
        *cantRRHH += rrhh[i].cantidadImpresas;
    }
}

void consultarPaginasImpresas(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]){
    int cantAdm=0, cantTec=0, cantRRHH=0;
    sumarTotalImpreso(admin, tec, rrhh, &cantAdm, &cantTec, &cantRRHH);
    printf("La cantidad de paginas impresas por el sector ADMINISTRACION es de: %d.\n", cantAdm);
    printf("La cantidad de paginas impresas por el sector TECNICA es de: %d.\n", cantTec);
    printf("La cantidad de paginas impresas por el sector RECURSOS HUMANOS es de: %d.\n", cantRRHH);
}
void sectorQmasImprimio(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]){
    int cantAdm=0,cantTec=0,cantRRHH=0;
    sumarTotalImpreso(admin, tec, rrhh, &cantAdm, &cantTec, &cantRRHH);
    if (cantAdm>cantTec&&cantAdm>cantRRHH)
    {
        printf("\n\nEl sector que mas imprimió es el de ADMINISTRACION.\n");
  
    }else if (cantTec>cantAdm&&cantTec>cantRRHH)
    {
        printf("\n\nEl sector que mas imprimió es el de TECNICA.\n");
    }else if (cantRRHH>cantAdm&&cantRRHH>cantTec)
    {
        printf("\n\nEl sector que mas imprimió es el de RECURSOS HUMANOS.\n");
    }
    
    
    

}