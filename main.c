#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float promedio;
    int contador=0;
    int acumulador=0;
    int continuar=1;

    while(continuar)
    {

        printf("Ingrese su edad: ");
        scanf("%d",&edad);
        contador++;
        acumulador=acumulador+edad;

        printf("Ingrese 1 para continuar o 0 para detener: ");
        scanf("\n %d", &continuar );



    }
    promedio= (float) acumulador/contador;
    printf("El promedio es de: %f",promedio);







   /* for(i=0; i<4; i++)
    {
        printf("Ingrese su edad :");
        scanf("%d",&edad);
        printf("Mi edad es de %d\n",edad);
    }*/













    /*char nombre;
    int edad;
    int localidad;

    printf("Ingrese su nombre: ");
    scanf("%s",&nombre);
    printf("Ingrese su edad: ");
    scanf("%d",&edad);
    printf("Ingrese su localidad: ");
    scanf("%s",&localidad);

    printf("Su nombre es %s  tiene %d años y vive en la localidad de %s",nombre,edad,localidad);*/




    return 0;

}
