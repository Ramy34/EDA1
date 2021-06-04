#include <stdio.h>
#include <stdlib.h>
#include"llenarNodo.c"
int main(){
	int *arreglo,cont,*arreglo2;
	size_t num=0;
	printf("¿Cuantos elementos tiene el conjunto?\n");
	scanf("%d",&num);
	arreglo=(int *)malloc (num*sizeof(int));
	if(arreglo!=NULL){
		for(cont=0;cont<num;cont++){
			printf("Inserte el elemento %d del conjunto.\n",cont+1);
			scanf("%d",(arreglo+cont));
		}
		printf("Vector insertado:\n\t[");
		for(cont=0;cont<num;cont++){
			printf("\t%d",*(arreglo+cont));
		}
		printf("\t]\n");
	}
	arreglo=(int *)realloc(arreglo, num*2 );
	for(cont;cont<num*2;cont++){
		printf("Inserte el elemento %d del conjunto.\n",cont+1);
		scanf("%d",(arreglo+cont));
	}
	printf("Vector insertado 2:\n\t[");
	for(cont=0;cont<num*2;cont++){
		printf("\t%d",*(arreglo+cont));
	}
	printf("\t]\n");
	free(arreglo);
	return 0;
}
