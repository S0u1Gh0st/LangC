#include<stdio.h>
#include<time.h>

/*
compara el uso del procesador en un for con 2 variables y en uno con una sola
*/

int main()
{
	int i,j;
	clock_t cput = clock();//se inicializa el reloj
	for(i = 100, j = 0; i > 0 && j < 100; i--,j++)printf("%s",i == 0 && j == 100 ? "fin":"corriendo");
	printf(" %ld CPU Ticks \n",cput);
	//cput -= cput; se reinicia, la sentencia de abajo tambien lo hace
	cput = clock();
	for(i = 0; i < 100; i++)printf("%s",i == 100 ? "Fin":"Corriendo");
	printf(" %ld CPU Ticks \n",cput);
return 0;
}
