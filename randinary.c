#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

/*
Erase una vez un conejito que tenia hambre y su necesidad lo llevo a pasar por 8 portales de luz para poder conseguir la zanasfactoria, si la llegara a comer cuenta la 
leyenda que dejaria de sentir hambre, lamentablemente existen los portales del vacio que lo trasladan al principio, llevandolo a una sucesion de saltos, y a un consumo de
energia
*/

int main()
{
	clock_t ecput = clock();//Reloj externo que se mostrara fuera del while
	int ecputSum = 0;//variable que acumulara los ticks por cada loop
	bool cond = true; 
	int loop = 1;//boink boink
	int loopw = 1;
	while(cond){
		clock_t icput = clock();//reloj interno del while, se muestra al final
		clock_t cput = clock();//reloj que se reinicializa con cada boink
		int nrand = rand() % 2; // 0 o 1
		if(nrand == 1){
			int nrand1 = rand() % 2; // segundo binario
			printf("%d|%d-%ld CPU Ticks-(%d)Boink\n",nrand,nrand1,cput,loop);//hasta aqui llegue si sale 0
			loop++;
			ecputSum += cput;
			cput = clock() - cput;
			if(nrand1 == 1){
				int nrand2 = rand() % 2; //si este y los 5 restantes son 1, cond=false
				printf("%d|%d|%d-%ld CPU Ticks-(%d)Boink\n",nrand,nrand1,nrand2,cput,loop);
				loop++;
				ecputSum += cput;
				cput = clock() - cput;
				if(nrand2 == 1){
					int nrand3 = rand() % 2;
					printf("%d|%d|%d|%d-%ld CPU Ticks-(%d)Boink\n",nrand,nrand1,nrand2,nrand3,cput,loop);
					loop++;
					ecputSum += cput;
					cput = clock() - cput;
					if(nrand3 == 1){
						int nrand4 = rand() % 2;
						printf("%d|%d|%d|%d|%d-%ld CPU Ticks-(%d)Boink\n",nrand,nrand1,nrand2,nrand3,nrand4,cput,loop);
						loop++;
						ecputSum += cput;
						cput = clock() - cput;
						if(nrand4 == 1){
							int nrand5 = rand() % 2;
							printf("%d|%d|%d|%d|%d|%d-%ld CPU Ticks-(%d)Boink\n",nrand,nrand1,nrand2,nrand3,nrand4,nrand5,cput,loop);
							loop++;
							ecputSum += cput;
							cput = clock() - cput;
							if(nrand5 == 1){
								int nrand6 = rand() % 2;
								printf("%d|%d|%d|%d|%d|%d|%d-%ld CPU Ticks-(%d)Boink\n",nrand,nrand1,nrand2,nrand3,nrand4,nrand5,nrand6,cput,loop);
								loop++;
								ecputSum += cput;
								cput = clock() - cput;
								if(nrand6 == 1){
									int nrand7 = rand() % 2;
									printf("%d|%d|%d|%d|%d|%d|%d|%d-%ld CPU Ticks-(%d)Boink\n",nrand,nrand1,nrand2,nrand3,nrand4,nrand5,nrand6,nrand7,cput,loop);
									loop++;
									ecputSum += cput;
									cput = clock() - cput;
									if(nrand7 == 1){
										printf("Secuencia de 8 bits completada\n");
										cond = false;
									}
								}
							}
						}
					}
				}
			}
		}
	printf("Internal Cpu Ticks %ld  (%d)WhileLoop\n--- --- --- --- ---\n",icput,loopw);
	loopw++;
	system("sleep 0.1");
	}
	printf("External %ld CPU Ticks Vs %d Acumulative internal CPU Ticks\n",ecput,ecputSum);
return 0;
}
