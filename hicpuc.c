#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>

/*
Como medir el consumo y el tiempo de un microprocesador en distintas tareas
*/
int main()
{
	float a;
	clock_t cput = clock(); // se inicializa el contador de ticks
	cput = clock() - cput; //justo antes de mostrar la cadena de reinicializa
	printf(" Este mensaje consumio %ld ticks del CPU\n",cput);

	cput = clock(); // se inicia para el for
	for(int i = 0; i < 9999; i++){
		a = log(i * i * i * i);
	}
	cput = clock() - cput; // se reinicializa
	printf(" %ld ticks por realizar un for de 9999+1 iteraciones de un log()\n",cput);

	cput = clock(); // inicia
	cput = clock() - cput; // reinicializa Misato- San, pule encera, pule y encera
	printf(" Este otro mensaje consumio %ld ticks\n",cput);

	cput = clock();
	for(int i = 0; i < 9999; i++){
		a = log(pow(i,4));
	}
	cput = clock() - cput;
	printf(" Una elevacion al cuadrado dentro de un log() repetida 10k veces consumio %ld ticks\n",cput);
return 0;
}
