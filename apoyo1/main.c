#include <stdio.h>
#include <stdlib.h>

int main()
{
  int edad;
  int i = 0;
  float promedio;
  int acumulador = 0;
  int continuar = 1;


     while(continuar)
  {
    printf("Ingrese su edad ");
    scanf("\n%d", &edad);
    i++;
    acumulador += edad;

    printf("Ingese 1 para continuar 0 para detener");
    scanf("\n %d", &continuar);


  }

  promedio = (float)acumulador/i;
  printf("\nEl promedio es de %f\n",promedio);






    return 0;
  /*for(i=0;i<4;i++)
  {
    printf("Ingrese su edad ");
    scanf("\%d", &edad);
    printf("Su edad es %d\n", edad);

  }*/
}
