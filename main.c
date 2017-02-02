#include <stdio.h>
#include <stdlib.h>

         //preguntar datos personales, imprimir

char Nombre[50];
int Edad;
char Fecha_de_nacimiento[50];
char Domicilio[150];



int main(int argc, char *argv[])
{
  printf("Ingrese su nombre completo: \n");
  scanf("%s", &Nombre);
  printf("Ingrese su edad: \n");
  scanf("%i", &Edad);
  printf("Ingrese fecha de nacimiento: \n");
  scanf("%s", &Fecha_de_nacimiento);
  printf("Ingrese domicilio: \n");
  scanf("%s", &Domicilio);
  
  printf("Nombre: %s\n", Nombre);
  printf("Edad: %i años\n", Edad);
  printf("Fecha de nacimiento: %s\n", Fecha_de_nacimiento);
  printf("Domicilio: %s\n", Domicilio);  
  
  system("PAUSE");	
  return 0;
}
