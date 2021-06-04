#include <stdio.h>
#include <stdlib.h>
int main (){
 int *arreglo, num, cont,*arreglo2;
 printf("¿Cuantos elementos tiene el conjunto?\n");
 scanf("%d",&num);
 arreglo = (int *)malloc (num * sizeof(int));
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


 printf("Se libera el espacio reservado.\n");
 free(arreglo);
 }
return 0;
}

