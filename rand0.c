#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cincorand(){
	for(int i = 0; i <= 4; i++){
		int randnr = rand() % 100 + 1;
		srand(time(NULL));
		printf("[%d] %d\n",i,randnr);
		system("sleep 1");
	}
return 0;
}

//Matriz de 10 x 5 que imprime nros aleatorios del 0 al 99
int matriztiempo(){
	int cond = 1,i = 0, promrand;
	while(cond == 1){
		int randnr = rand() % 99;
		srand(time(NULL)+i);//se le agregan los segundos desde el 1/1/1970 Dont feel Old, por eso Sleep == 1seg al final
		if(i == 10 || i == 20 || i == 30 || i == 40)printf("\n");//Saltos cada 10 boink boink..
		printf("|[%d] %d|",i,randnr);
		i++;
		promrand += randnr;
		if(i == 50){
			printf("\n\t\t-------------------N(%d)--------------\n",promrand/i);
			i = 0;
		}
		system("sleep 1");
	}
	return 0;
}

//Imprime una matriz de 3 x 10 de nros aleatorios y saca el promedio
int matrizsintiempo(){
	int cond = 1,i=0, promseed, promrand;//i teracion, promedios y la condicional que solo la detienes tu bebe :3 Ctrl + Z
	while(cond == 1){
		int rseed = rand(); // esta sera el limite de randnr
		srand(rseed);
		int randnr = rand() % rseed;
		//salta de linea en estos numeros
		if(i == 3 || i == 6 || i == 9 || i == 12 || i == 15 || i == 18 || i == 21 || i == 24 || i == 27)printf("\n");
		//la imprimision y la acumulacion de i, promseed y rand
		printf(" %d ",randnr);
		i++;
		promseed += rseed;
		promrand += randnr;
		//Cuando i llega a 30 saca los promedios y de nuevo i al valor 0
		if(i == 30){
			printf("\n------ Promedios (%d)Seed (%d)nro random --------\n",promseed/i,promrand/i);
			i = 0;
		}
		system("sleep 0.25");//Duerme por un cuarto de segundo, lo siento solo soy un humano
	}
	return 0;
}

int main()
{
	matriztiempo();
return 0;
}
