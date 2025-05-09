#include <stdio.h>
#include "bibIngresoModDatos.h"
void impActivasXsector(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]){
    int cantAdm=0, cantTec=0 , cantRRHH=0;
    for (int i = 0; i < 4; i++) {
        if (admin[i].estado==1)
        {
            cantAdm++;
        }
        if (tec[i].estado==1)
        {
            cantTec++;
        }
        if (rrhh[i].estado==1)
        {
            cantRRHH++;
        }
        
    }
    printf("La cantidad de imopresoras activas en el sector ADMINISTRACION es de: %d.\n", cantAdm);
    printf("La cantidad de imopresoras activas en el sector TECNICA es de: %d.\n", cantTec);
    printf("La cantidad de imopresoras activas en el sector RECURSOS HUMANOS es de: %d.\n\n", cantRRHH);
}