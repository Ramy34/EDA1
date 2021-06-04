#include"nodo.c"
#include"push.c"
#include"mostrarPila.c"
#include"llenarNodo.c"
//#include"leerNodo.c"
#include"pop.c"
//#include"mostrarElemento.c"
int main(){
 int entMenu;
 pila=(struct nodo*)malloc(MAX*sizeof(struct nodo));
 while(1){
  printf("####Menu####\n");
  printf("1)PUSH\n");
  printf("2)POP\n");
  printf("3)MOSTRAR\n");
  printf("4)SALIR\n");
  scanf("%d",&entMenu);
  switch(entMenu){
   case 1:
          system("clear");
          if(entNumElementos<MAX){
           pila=(struct nodo*)realloc(pila,sizeof(struct nodo));
           printf("\t Elemento(%i) \n",entNumElementos);
           struct nodo n=llenarNodo();
           push(n);}
          else{
           printf("La pila ya esta llena.\n");}
           mostrarPila();
          break;
   case 2:
          system("clear");
          pop();
          mostrarPila();
         // mostrarElemento(aux);
          break;
  /* case 3: 
           system("clear");
           mostrarPila();
           break;*/
   case 4:
          return 0;
          break;
   default:
           printf("Opcion invalida.\n");
  }
 }
}
