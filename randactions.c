#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

/*
Esta es una simulacion de una pelea de Boxeo
*/

int main()
{
	bool cond = true;
	int suerte = 10, vidaN = 100, vidaB = 100;
	printf(" \U0001f514 BOX \U0001f514 \n");
	while(cond){
		int Move = rand() % 2;
		srand(time(NULL));
		if(Move == 1){
			printf("\t -- El negro se acerca primero\n");
			int improvisacion = rand() % suerte;
			if(improvisacion >= 8 && improvisacion <= 9){
				int golpe = rand() % 3;
				if(golpe == 0){
					int guardia = rand() % 2,dano = 20;
					if(guardia == 1)dano-=7;
					printf(" - El negro le a dado un Jab en la cara al blanco \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fae8");
					vidaB -= dano;
					printf("\t -- el negro retrocede\n");
				}
				if(golpe == 1){
					int guardia = rand() % 2,dano = 30;
					if(guardia == 1)dano-=13;
					printf(" - El negro le a zumbado un gancho en la cara al blanco \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fae8");
					vidaB -= dano;
					printf("\t -- el negro retrocede\n");
				}
				else{
					int guardia = rand() % 2,dano = 50;
					if(guardia == 1)dano-=21;
					printf(" - El negro le a asertado un Uppercut en la barbilla al blanco \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fae8");
					vidaB -= dano;
					printf("\t -- el negro retrocede\n");
				}
			}
			if(improvisacion > 4 && improvisacion < 8){
				int golpe = rand() % 2;
				if(golpe == 0){
					int guardia = rand() % 2,dano = 10;
					if(guardia == 1)dano-=4;
					printf(" - El negro le a lanzado un jab al pecho al blanco \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001f4a2");
					vidaB -= dano;
					printf("\t -- el negro retrocede\n");
				}
				else{
					int guardia = rand() % 2,dano = 30;
					if(guardia == 1)dano-=13;
					printf(" - El negro le a zumbado un gancho al pecho \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001f4a2");
					vidaB -= dano;
					printf("\t -- el negro retrocede\n");
				}
			}
			if(improvisacion > 0 && improvisacion < 4){
				int golpe = rand() % 2;
				if(golpe == 0){
					int guardia = rand() % 2,dano = 20;
					if(guardia == 1)dano-=7;
					printf(" - el negro le a lanzado un jab en las partes blandas de blanco \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fac3");
					vidaB -= dano;
					printf("\t -- el negro retrocede\n");
				}
				else{
					int guardia = rand() % 2,dano = 40;
					if(guardia == 1)dano-=18;
					printf(" - El negro le a zumbado un gancho en las partes blandas del blanco \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fac3");
					vidaB -= dano;
					printf("\t -- el negro retrocede\n");
				}
			}
			else{
				printf(" - El negro a lanzado un golpe improvisado pero fallo\n");
			}
		}
		if(Move == 0){
			printf("\t -- El blanco se acerca primero --\n");
			int improvisacion = rand() % suerte;
			if(improvisacion >= 8 && improvisacion <= 9){
				int golpe = rand() % 3;
				if(golpe == 0){
					int guardia = rand() % 2,dano=20;
					if(guardia == 1)dano-=7;
					printf(" - El blanco le a lanzado un Jab en la cara al negro \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fae8");
					vidaN -= dano;
					printf("\t -- el blanco retrocede\n");
				}
				if(golpe == 1){
					int guardia = rand() % 2,dano=30;
					if(guardia == 1)dano-=13;
					printf(" - El blanco le a zumbado un gancho en la cara al negro \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fae8");
					vidaN -= dano;
					printf("\t -- el blanco retrocede\n");
				}
				else{
					int guardia = rand() % 2,dano=50;
					if(guardia == 1)dano-=21;
					printf(" - El blanco le a asertado un Uppercut en la barbilla del negro \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fae8");
					vidaN -= dano;
					printf("\t -- el blanco retrocede\n");
				}
			}
			if(improvisacion > 4 && improvisacion < 8){
				int golpe = rand() % 2;
				if(golpe == 0){
					int guardia = rand() % 2,dano=10;
					if(guardia == 1)dano-=4;
					printf(" - El blanco le a lanzado un Jab en el pecho al negro \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001f4a2");
					vidaN -= dano;
					printf("\t -- el blanco retrocede\n");
				}
				else{
					int guardia = rand() % 2,dano=30;
					if(guardia == 1)dano-=13;
					printf(" - El blanco le a zumbado un gancho al pecho del negro \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001f4a2");
					vidaN -= dano;
					printf("\t -- el blanco retrocede\n");
				}
			}
			if(improvisacion > 0 && improvisacion < 4){
				int golpe = rand() % 2;
				if(golpe == 0){
					int guardia = rand() % 2,dano=20;
					if(guardia == 1)dano-=7;
					printf(" - El blanco le a lanzado un Jab en las partes blandas del negro \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fac4");
					vidaN -= dano;
					printf("\t -- el blanco retrocede\n");
				}
				else{
					int guardia = rand() % 2,dano=40;
					if(guardia == 1)dano-=18;
					printf(" - El blanco le a zumbado un gancho en las partes blandas del negro \U0001f91c %s \n",guardia == 1 ? "\U0001f6e1":"\U0001fac4");
					vidaN -= dano;
					printf("\t -- el blanco retrocede\n");
				}
			}
			else{
				printf(" - El blanco a lanzado un golpe improvisado pero ah fallado\n");
			}
		}
		if(vidaN <= 0 || vidaB <= 0){
			cond = false;
			printf("Resultado Final \U0001f94a \n Vida del negro %d \% \n vida del blanco %d \% \n Ganador el %s \U0001f4aa \U0001f60f \U0001f947 \n",vidaN,vidaB,vidaN > vidaB ? "Negro":"Blanco");
		}
		system("sleep 1");
	}
return 0;
}
