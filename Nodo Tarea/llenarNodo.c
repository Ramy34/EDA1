#include<stdio.h>
#include"nodo.c"
struct nodo llenarNodo(){
	struct nodo alumno;
	printf("Ingrese el nombre del alumno.\n");
	setbuf(stdin,NULL);
	scanf("%s",alumno.nombre);
	printf("Ingresa la Facultad: \n");
	setbuf(stdin,NULL);
	scanf("%s",alumno.facultad);
	printf("Ingrese la edad: \n");
	setbuf(stdin,NULL);
	scanf("%d",&alumno.edad);
//return alumno;
}
