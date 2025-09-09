#include<stdio.h>

/*
Existe una regla que dice que una vez declarada la variable no se le puede
cambiar su tipo, hoy probaremos eso
*/

int main()
{
	int vari = 7;
	printf("hola soy el valor de vari : %d\n",vari);
	char vari = 't';
	printf("Aqui cambiamos el tipo de entero a caracter a vari : %c\n",vari);
return 0;
}
int hola(){
	printf("hola");
}
hola();
/*
beejvar.c: In function 'main':
beejvar.c:12:14: error: conflicting types for 'vari'; have 'char'
   12 |         char vari = 't';
      |              ^~~~
beejvar.c:10:13: note: previous definition of 'vari' with type 'int'
   10 |         int vari = 7;
      |   

Por cierto debajo del main solo puede ir comentarios, ya que cualquier minima
sentencia daria un warning. 

beejvar.c:19:1: warning: data definition has no type or storage class
   19 | hola();
      | ^~~~
beejvar.c:19:1: error: type defaults to 'int' in declaration of 'hola' [-Wimplicit-int]
beejvar.c: In function 'hola':
beejvar.c:18:1: warning: control reaches end of non-void function [-Wreturn-type]
   18 | }
      | ^

*/
