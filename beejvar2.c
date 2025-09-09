#include<stdio.h>

/*
Aunque x parece una tupla o lista en python este solo muestra el valor que esta
mas a la derecha y muestra este suculento mensaje
warning: left-hand operand of comma expression has no effect [-Wunused-value]
*/
int main()
{
	int x = (1,2,3);
	printf("%d\n",x);

return 0;
}
