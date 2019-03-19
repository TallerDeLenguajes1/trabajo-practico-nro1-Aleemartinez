
#include <stdio.h>
#include <stdlib.h>

int	cuadrado( int num);//punto 1
void cuadrado2(int a);//punto 2
void dirval(int b);//punto 3 
void invertir(int *i, int *j); //punto 4
void ordenar(int *i,int *j);//punto 5
void imprimir(int k, int l);//punto 6

int main(void) {
setvbuf(stdout, NULL, _IONBF,0);
	int i, j;
	
	/*prueba del punto 1 
	printf("ingrese numero para calcular su cuadrado\n");
	scanf("%d",&i);
	printf("%d numero al cuadrado \n",cuadrado(a) );*/
	
	/*Prueba del punto 2
	cuadrado2(i); */

	/* Pueba del punto 3 
	dirval(i);*/

	/*Prueba del punto 4
	printf("Ingrese valor de A=\n");
	scanf("%d",&i);
	printf("ingrese valor de B=\n");
	scanf("%d",&j);
	printf("Valores asignados \n A=%d B=%d\n",i,j );
	invertir(&i,&j);
	printf("Valores invertidos \na=%d b=%d\n",i,j );*/

	/*Prueba del punto 5
	printf("ingrese valor de A=\n");
	scanf("%d",&i);
	printf("Ingrese el valor de B=\n");
	scanf("%d",&j);
	ordenar(&i,&j);
	printf("Valores ordenados\n A=%d B=%d",i,j);*/

	/* prueba del punto 6
	printf("Ingrese valor de A=\n" );
	scanf("%d",&i);
	printf("Ingrese valor de B=\n");
	scanf("%d",&j);
	imprimir(i,j);*/

	return 0;
}

int cuadrado(int num){
	int res;
	res=num*num;
	return res;
}
void cuadrado2(int a){
	int res;
	res=a*a;
	printf(" el cuadrado de %d es : %d \n",a,res );	
}
void dirval(int b){
	printf("Direccion: %d \n Contenido: %d",&b ,b );
}
void invertir(int *i, int *j){
	int tmp;
	tmp=*j;
	*j=*i;
	*i=tmp;
}

void ordenar(int *i,int *j){
	int tmp;
	if (*i>*j)
	{
		tmp=*j;
		*j=*i;
		*i=tmp;
	}
}
void imprimir(int k, int l){
	ordenar(&k,&l);
	if (k!=l)
	{
		printf("Menor=%d Mayor=%d\n",k,l);
	}
	else{
		printf("Los valores son iguales\n");
	}
}
