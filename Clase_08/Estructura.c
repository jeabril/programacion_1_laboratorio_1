#include <stdio.h>
#include <stdlib.h>
#define A 3
typedef struct
{
    int legajo;
    char nombre[30];
    float promedio;
    int edad;
} sAlumno;

void mostrarUnAlumno(sAlumno);
sAlumno PedirAlumno();
void cargarListadoDeAlumnos(sAlumno[], int);

int main()
{
    sAlumno listadoMain[A];
    int i;



    for (i=0;i<A; i++)
    {
        printf("Ingrese legajo: ");
    scanf("%d",&listadoMain[i].legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(listadoMain[i].nombre);

    printf("Ingrese la edad: ");
    scanf("%d",&listadoMain[i].edad);

    printf("Ingrese promedio: ");
    scanf("%f",&listadoMain[i].promedio);
    }

    /*sAlumno miAlumno;

    miAlumno=PedirAlumno();*/
    //sAlumno OtroAlumno;


    /*printf("Ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese la edad: ");
    scanf("%d",&miAlumno.edad);

    printf("Ingrese promedio: ");
    scanf("%f",&miAlumno.promedio);*/

    //OtroAlumno=miAlumno;



    // printf("%d--%s--%.2f", OtroAlumno.legajo, OtroAlumno.nombre, OtroAlumno.promedio);
    for (i=0;i<A; i++)
    {
        mostrarUnAlumno(listadoMain[i]);
    }
    return 0;
}

/*sAlumno PedirAlumno()
{
    sAlumno alumnito;

    printf("Ingrese legajo: ");
    scanf("%d",&alumnito.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(alumnito.nombre);

    printf("Ingrese la edad: ");
    scanf("%d",&alumnito.edad);

    printf("Ingrese promedio: ");
    scanf("%f", &alumnito.promedio);

    return alumnito;
}
*/

void mostrarUnAlumno(sAlumno miAlumno)
{
    printf("%d--%s--%d--%.2f\n", miAlumno.legajo, miAlumno.nombre,miAlumno.edad,miAlumno.promedio);
}

