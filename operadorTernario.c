#include<stdio.h>

/*
el operador ternario que veras simplifica el uso de if else
la construccion de este tiene este formato
var1 operador var2 > "Si es verdadero":"si es falso"
operadores :
	==
	!=
	<
	>
	>=
	<=
cabe destacar que esta operacion no es de control de flujo y no remplaza
a un if else por lo complejo que podria anidar esta condicion
*/
int main()
{
	int nro = 7, nx = 2,z = 2, x = 2;
	float decimal = 0.323, dx = 0.322;

	printf(" %d es %s %d \n",nx ,nx > nro ? "Mayor que " : "menor que ",nro);
	printf(" %f es %s %f \n",dx ,dx > decimal ? "Mayor que " : "menor que ",decimal);
/*
Otra cosa que puedes observar aqui es como funciona la pre y post  modificacion
a la hora de ser evaluada, veras que como su nombre indica pre modifica antes
de la operacion de evaluacion y por el contrario la otra cumple con lo que
dice su nombre, esta modificacion ocurre solo dentro del printf observa
el 3er printf
*/
	printf(" %d es %s %d \n",z,z == --x ? "Igual a " : "diferente de ",x);
	printf(" %d es %s %d \n",z,z == x++ ? "Igaul a " : "diferente de ",x);
	//x++;
	printf(" Valor actual de X : %d\n",x);
return 0;
}

/*
warning: operation on 'x' may be undefined [-Wsequence-point]
*/
