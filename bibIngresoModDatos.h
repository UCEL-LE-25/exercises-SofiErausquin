#pragma once 
struct Impresora {
    int estado;
    int cantidadImpresas;
};

void cargarPaginasImpresas(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]);
void cargarPag( struct Impresora sector[]);
void mostrarSectores();
void cargarEstado(struct Impresora admin[], struct Impresora tec[], struct Impresora rrhh[]);
void modificarEstado(struct Impresora sector[]);