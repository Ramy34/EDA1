#include "nodo.c"
#include "llenarpersona.c"
#include "insertar.c"
//#include "buscar.c"
//#include "borrar.c"
#include "mostrarlista.c"
int main(){
 int opcion;
 while(1){
  printf("\t\tLista Simple.\n");
  printf("\t1)Agregar elemento.\n");
  printf("\t2)Buscar elemento.\n");
  printf("\t3)Eliminar Elemento.\n");
  printf("\t4)Mostrar Lista.\n");
  printf("\t5)Salir\n");
  printf("\tSelecciona una opcion.\n");
  scanf("%d",&opcion);
  switch(opcion){
   case 1:printf("Se agregara un elemento\n");
		  insertar(); 
          break;
   case 2:printf("Se buscara un elemento\n");
          break;
   case 3:printf("Se eliminara un elemento\n");
          break;
   case 4:printf("Se mostrara la lista.\n");
          mostrarLista(numElementos,nuevo);
          break;
   case 5:printf("Adios! ^-^\n");
          return 0;
          break;
   default: printf("Opcion invalida.\n");
            break;}
   }
}
