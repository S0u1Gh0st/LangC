#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//Muestra la fecha actual en cadena
int cadenafecha(){
	//Almacenando los segundos desde 1/1/1970
	time_t t = time(NULL);
	//convirtiendo t en tiempo local
	struct tm* ptr = localtime(&t);
	//obteniendo la cadena del puntero
	printf("%s\n",asctime(ptr));
	//impripiendo el resultado del comando date
	system("date");
return 0;
}

//Muestra el tiempo transcurrido desde el periodo Unix
int desdeunixperiod(){
	int cond = 1; //condicional para mantener el while activo
	while(cond == 1){
	time_t at = time(NULL); //segundos actuales desde 1/1/1970
	system("clear"); //system es parte de stdlib que hace uso de comandos del sistema
	printf("%ld anos|%ld dias|%ld horas|%ld minutos|%ld segundos\n", (((at/60)/60)/24)/365, ((at/60)/60)/24, (at/60)/60, at/60, at );
	system("sleep 1");//espera un segundo
	}
return 0;
}

//Muestra el tiempo de ejecucion de un proceso, pero no lo hace con decimales
int diferenciatime(){
	time_t start, end;
	start = time(NULL);//inicializando el tiempo inicial
	//Inicio de la operaciones
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n",a,b,a+b);
	//final de las operaciones
	end = time(NULL);//inicializando el tiempo final
	//Imprimiendo la diferencia
	printf("Tiempo de ejecucion %.3f segundos\n",difftime(end,start));
return 0;
}


int main(){
	
}
