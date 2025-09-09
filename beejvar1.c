#include<stdio.h>
#include<stdbool.h>

/*
https://en.wikipedia.org/wiki/C_data_types
https://www.geeksforgeeks.org/c/data-types-in-c/

*/

int main()
{
	//tipos
	bool cond;//necesitas stdbool.h
	char c;
	char cadena['*'];
	char *otracadena;
	int entero;
	float decimal;
	double decimalmaspreciso;

	//tipos con modificaciones
	unsigned char uc = 125; // https://www.ascii-code.com/
	signed char sc = -125;
	short int shorty = 31545;
	float ldecimal = 2.75654567647;
	long double lldecimal = 3.876877651726387;

	//cada variable se especifica para tener un capacidad en una direccion en la
	//memoria, C es muy restricto con este tema, a diferencia de su hijo rebelde python
	printf("la variable pesa unos %ld Bytes\n",sizeof(lldecimal));

return 0;
}
