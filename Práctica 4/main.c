#include<stdio.h>
#include<stdlib.h>
#include"llenarNodo.c"
#include"imprimirNodo.c"
#include"listarArticulos.c"
int main(){
	int opMenu, numElementos=0, idArticulo;
	struct nodo carrito[10],*carro=NULL;
	while(1){
		printf("\t#### MENU ####\n");
		printf("1) Mostrar articulos.\n");
		printf("2) Agregar articulo el carrito.\n");
		printf("3) Ver articulos del carrito\n");
		printf("4) Salir\n");
		printf(":");
			if (scanf("%d",&opMenu)==1){
				switch(opMenu){
					case 1:
						system("cls");
						imprimirLista();
						break;
					case 2:
						carro=(struct nodo*)realloc(carro,sizeof(struct nodo));
						if (carro!=NULL){
							system("cls");
							imprimirLista();
							carrito[numElementos++]=agregarNodo(idArticulo);
						}
						
						
						
						break;
					case 3:
						if(numElementos==0){
							system("cls");
							printf("El carrito estA vacio.\n");
						}else{
							int cont;
							float total=0;
							system("cls");
							for(cont=0;cont<numElementos;cont++){
								imprimirNodo(carrito[cont]);
								total+=precio[carrito[cont].id]*carrito[cont].cantidad;
							}
								printf("Total a pagar.........%.2f\n\n",total);
						}
						break;
					case 4: return 0;
						
				}
			}
			else{
				system("cls");
				setbuf(stdin,NULL);
				printf("FAVOR DE INSERTAR UN NUMERO.\n");
				}
	}
	return 0;
}
