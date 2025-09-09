#include<stdio.h>
#include<time.h>

int main()
	{
	FILE *fptr;
	fptr = fopen("reg.txt", "a");
	//estructura para almacenar el tiempo local
	struct tm* ptr;

	//variable para almacenar el tiempo de ahora
	time_t t;

	//obtener el tiempo de ahora
	t = time(NULL);

	//Convertirlo a tiempo local
	ptr = localtime(&t);

	//obteniendo la accion
	int usrA;
	char usrR1[] = " [Compra] ";
	char usrR2[] = " [Venta] ";
	char usrR3[] = " [Ganancia] ";
	char usrR4[] = " [Gasto] ";
	char usrR5[] = "[Registro]";
	char asset0['*'];
	char asset0a['*'];
	char asset1['*'];
	char asset1a['*'];
	char exch['*'];
	printf("1)Compra\n2)Venta\n3)Ganancia\n4)Gasto\n5)Registro\n> ");
	scanf("%d",&usrA);
	if(usrA == 1){
		printf("Que compraste?\n");
		scanf("%s",&asset0);
		printf("Que cantidad de %s?\n",asset0);
		scanf("%s",&asset0a);
		printf("A cambio de?\n");
		scanf("%s",&asset1);
		printf("Que cantidad de %s?\n",asset1);
		scanf("%s",&asset1a);
		printf("En que sitio?\n");
		scanf("%s",&exch);
		fprintf(fptr,"\033[1;32m%s de %s %s por %s %s el  %s en [%s]\n",usrR1,asset0a,asset0,asset1a,asset1,asctime(ptr),exch);
		fclose(fptr);
	}
	if(usrA == 2){
		printf("Que vendiste?\n");
		scanf("%s",&asset0);
		printf("Que cantidad de %s\n",asset0);
		scanf("%s",&asset0a);
		printf("A  cambio de?\n");
		scanf("%s",&asset1);
		printf("Que cantidad de %s?\n",asset1);
		scanf("%s",&asset1a);
		printf("En que sitio?\n");
		scanf("%s",&exch);
		fprintf(fptr,"\033[1;31m%s de %s %s por %s %s el %s en [%s]\n",usrR2,asset0a,asset0,asset1a,asset1,asctime(ptr),exch);
		fclose(fptr);
	}
	if(usrA == 3){
		printf("Que Ganaste?\n");
		scanf("%s",&asset0);
		printf("Que cantidad de %s?\n",asset0);
		scanf("%s",&asset0a);
		printf("En que sitio?\n");
		scanf("%s",&exch);
		fprintf(fptr,"\033[1;34m%s de %s %s el %s en [%s]\n",usrR3,asset0a,asset0, asctime(ptr),exch);
		fclose(fptr);
	}
	if(usrA == 4){
		printf("Que gastaste?\n");
		scanf("%s",&asset0);
		printf("Que cantidad de %s\n",asset0);
		scanf("%s",&asset0a);
		printf("A cambio de?\n");
		scanf("%s",&asset1);
		printf("Que cantidad de %s?\n",asset1);
		scanf("%s",&asset1a);
		printf("En que sitio?\n");
		scanf("%s",&exch);
		fprintf(fptr,"\033[1;35m%s de %s %s por %s %s el %s en [%s]\n",usrR4,asset0a,asset0,asset1a,asset1, asctime(ptr),exch);
	}
	if(usrA == 5){
		printf("Que Par registras?\n");
		scanf("%s",&asset0);
		printf("El valor de  %s\n",asset0);
		scanf("%s",&asset0a);
		printf("En que sitio?\n");
		scanf("%s",&exch);
		fprintf(fptr,"\033[1;33m%s de %s al precio de %s el %s en [%s]\n",usrR5,asset0,asset0a,asctime(ptr),exch);	
	}
return 0;
}
