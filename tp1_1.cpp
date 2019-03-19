#include <stdio.h>
#include <stdlib.h>

int main(void) {
setvbuf(stdout, NULL, _IONBF,0);
	
	int *punt,var=3;

	punt = &var;
	 printf(" 1) contenido del puntero: %d\n 2) Direccion de memoria almacenada por el puntero: %d \n 3) Direccion de memoria de la variable: %d \n 4) Direccion de memoria del puntero: %d \n 5) Tamaño de memoria utilizado por la variable: %d",*punt, punt,&var,&punt,sizeof(var));


//en los puntos 2 y 3 el resultado es el mismo porque la funcion del puntero es almacenar la direccion de memoria de la variable a la que apunta en este caso *punt apunta a var.
//en el punto 4 obtengo un valor distinto  a los demas , debido a que el puntero tiene una direccion de memoria distinta (en a cual guarda la direccion de memoria de la variable que apunta) a la variable a la que apunta.

return 0;

}
