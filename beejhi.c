#include<stdio.h>

/*
Aqui recopilare material sobre el lenguaje C, los 3 principales serian
Webs, aquellas que muestran info pero su interaccion con el usuario comunmente
se hace por email
Comunidades, esos foros, o sitios webs con la capacidad de publicar y comentar
acerca de un tema o varios
Chats una comunicacion mas directa y rapida(en ocaciones)
*/
int webs(){
	printf("\t-\U0001f310--WebSites--\U0001f30e-\n https://en_cppreference.com\nhttps://www.learn-c.org\n\n\t--- \U0001faf6 ---\n");
return 0;
}

int comms(){
	printf("\t-\U0001f91d--Comunidades--\U0001f47d-\n GoogleGroups : comp.lang.c\n Reddit : r/C_programming\n\n\t---  \U0001faf6  ---\n");
return 0;
}

int chats(){
	printf("\t-\U00002709--Chats-\U0001f4ac-\n\t--- \U0001faf6 ---\n");
return 0;
}

int main()
{
	webs();
	comms();
	chats();
return 0;
}
