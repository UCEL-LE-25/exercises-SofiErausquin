#pragma once 
#include "bibIngresoModDatos.h"
void consultarPaginasImpresas(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]);
void sumarTotalImpreso(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[],int *cantAdm, int *cantTec, int *cantRRHH);
void sectorQmasImprimio(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]);