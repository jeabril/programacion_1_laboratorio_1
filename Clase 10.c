#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int isEmpty;

}sempleado;

int menu ();
void inicializarEmpleados (sempleado lista[], int tam);

int buscarlibre(sempleado lista[], int tam);
int buscarEmpleados (sempleado lista[],int tam, int legajo);
void altaEmpleado(sempleado lista[], int tam);
void mostrarEmpleados(sempleado lista[], int tam);
void mostrarEmpleado(sempleado unEmpleado);

int main()
{
    sempleado empleados[TAM];
    char seguir='s';
    inicializarEmpleados(empleados, TAM);


  do{

        switch (menu())
        {
        case 1:
            altaEmpleado(empleados,TAM);
            system("pause");
        break;
        case 2:
            printf("Baja\n");
            system("pause");
        break;
        case 3:
            printf("Modificacion\n");
            system("pause");

        break;
        case 4:
            mostrarEmpleados(empleados, TAM);
            system("pause");
        break;
        case 5:
            printf("Ordenar empleados\n");
            system("pause");
        break;
        case 6:
            printf("Salir\n");
            seguir='n';
        break;
    }
 }
  while(seguir =='s');





    return 0;
}


int menu ()
{
    int opcion;

    system ("cls");
    printf("\n 1_ Alta\n\n");
    printf("\n 2_ Baja\n\n");
    printf("\n 3_ Modificación\n\n");
    printf("\n 4_ Listar empleados\n\n");
    printf("\n 5_ Ordenar empleados\n\n");
    printf("\n 6_ Salir\n\n");
    printf("Elegir opción: ");
    scanf("%d",&opcion);

    return opcion;
}


void inicializarEmpleados (sempleado lista[], int tam)
{
    for(int i=0; i<tam;i++)
    {
        lista[i].isEmpty=1;
    }

}
void mostarEmpleado (sempleado unEmpleado)
{
    printf("%d %s %s %.2f\n ", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldo);
}
void mostrarEmpleados(sempleado lista[], int tam)
{
    system("cls");
    printf("Legajo Nombre Sexo Sueldo\n\n");

    for(int i=0; i<tam ;i++)
    {
        if (lista[i].isEmpty==0){
            mostarEmpleado(lista[i]);
        }
    }
    system("pause");
}

int buscarlibre(sempleado lista[], int tam)
{
    int indice= -1;

    for (int i=0; i<tam;i++)
    {
        if(lista[i].isEmpty==1)
        {
        indice=1;
        break;
        }
    }

    return indice;

}

int buscarEmpleado (sempleado lista[],int tam, int legajo)
{
    int indice= -1;

    for (int i=0; i<tam;i++)
    {
        if(lista[i].legajo== legajo && lista[i].isEmpty==0)
        {
        indice=i;
        break;
        }
    }

    return indice;

}
void altaEmpleado(sempleado lista[], int tam)
{
    int indice;
    int legajo;
    int existe;
    sempleado nuevoEmpleado;

    indice=buscarlibre(lista, tam);
    system("cls");
    printf("***Alta Empleado\n\n***");

    if (indice == -1)
    {
        printf("No hay lugar en el sistema\n\n");
        system("pause");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d",&legajo);

        existe=buscarEmpleado(lista,tam,legajo);
    }
    if (existe!=-1)
    {
       printf("Ya existe un empleado con el legajo %d",legajo);
       mostrarEmpleado(lista[existe]);
        system("pause");
    }
    else
    {
        nuevoEmpleado.legajo=legajo;
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nuevoEmpleado.nombre);

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&nuevoEmpleado.sexo);

        printf("Ingrese sueldo: ");
        fflush(stdin);
        scanf("%f",&nuevoEmpleado.sueldo);

        nuevoEmpleado.isEmpty=0;

        lista[indice]=nuevoEmpleado;

        printf("Se ha dado de alta a un nuevo empleado\n\n");
        system("pause");



    }


}

