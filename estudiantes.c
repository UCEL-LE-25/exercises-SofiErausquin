#include <stdio.h>

struct estudiantes{
    char nombre[50];
    int edad;
    int finalNote;
};
struct estudiantes estudiante[10];

void ingresarNuevosEstudiantes(struct estudiantes estudiante[], int incremento);

int main() {


    int incremento=0,option;
    do {
        printf("1. Agregar nuevos estudiantes. ");
        printf("2. Mostrar todos los registrados. ");
        printf("3. Calcular el promedio de notas. ");
        printf("0. Salir. ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            ingresarNuevosEstudiantes(estudiante, incremento);
            incremento++;
            break;
        
        default:
            break;
        }
    } while (option!=0 );

}

void ingresarNuevosEstudiantes(struct estudiantes estudiante[], int incremento) {
    printf("Ingrese el nombre del estudiante %d: ",incremento+1);
    scanf("%s", estudiante[incremento].nombre);
    printf("Ingrese la edad del estudiante %d: ",incremento+1);
    scanf("%s", estudiante[incremento].nombre);
    printf("Ingrese la nota final del estudiante %d: ",incremento+1);
    scanf("%s", estudiante[incremento].nombre);
}