#include<stdio.h>

/*
Los eMojis son divertidos no es asi, para mostrarlos tendras que usar el escape
\U seguido de los ceros necesarios + el codigo del emoji aqui una lista 

https://en.wikipedia.org/wiki/List_of_emojis

Ej . para 26e9 hacen falta 4 ceros, hay codigos de cinco caracteres por
lo que necesitan solo 3 ceros, en total deben ser 8 caracteres sin incluir
\U 
*/

int main()
{// el \t sirve para hacer una tabulacion el \n para saltar de linea
	printf("\n\t\U000026e9 W5K \U000026e9\n\n\tVersiones de C\n\tK&R\n\tC89,ANSIC,C90\n\tC95\n\tC99\n\tC11\n\tC17,C18\n\tC2x\n");
	char c = 'C', str[] = "https://en.wikipedia.org/wiki/C_data_types",name['*'];
	int birth = 1978;
	printf("Cual es su nombre > ");
	scanf("%s",name);
	printf("Hola %s sabes que el lenguaje %c de %d contiene estos tipos de datos para variables -> %s\n",name,c,birth,str);

return 0;
}
