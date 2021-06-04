#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#define MIN 0
struct Persona{
    int edad;
    char nombre[30];
    struct Persona *sucesor;
};
struct Persona *cola=NULL,*tail=NULL,*head=NULL;
int i=0,j=0,k=0,Opc=0,numElementos=0,arr[MAX]={-1,-1,-1,-1,-1};
//################################## DEFINICION DE FUNCIONES ###########
int encolar(struct Persona n){
	if(numElementos==MAX){
		return 0;
	}else{
		if(i!=MAX){
			cola[i]=n;
		}else{i=0;
			cola[i]=n;
		}arr[i]=i;
		if(numElementos==0){
			head=cola+(numElementos);
			tail=cola+(numElementos);
			numElementos++;
		}else{	struct Persona *aux;
			aux=tail;
			tail=cola+(numElementos);
			(*aux).sucesor=tail; 
			numElementos++;
		 }
	 return 1;
	 }
}
struct Persona* desencolar(){
	if(numElementos==0){
		return NULL;
	}else{
		if(k!=MAX){
			arr[k]=-1;
			k++;
		}else{k=0;}
		struct Persona *aux;
		aux=head;
		head=(*head).sucesor;
		if(numElementos==1){
			tail=(*head).sucesor;
		}
		numElementos--;
		return aux;
	 }
} 
struct Persona llenarPersona(){
	struct Persona P;
    printf("Escribe el nombre de la persona: ");
    scanf("%s",P.nombre);
    printf("Escribe la edad de la persona: ");
    scanf("%d",&P.edad);
    system("cls");
    return P;
}
void imprimirPersona(){
	/*for(j=0;j<MAX;j++){
		printf("arr[%d]=%d\n",j+1,arr[j]);
	}*/
	    for(j=0;j<MAX;j++){
	    	if(arr[j]!=-1){
				printf("\t...Persona(%i)...\n",j+1);
		        printf("El nombre es: %s\n",cola[arr[j]].nombre);
		        printf("La edad es: %d\n",cola[arr[j]].edad);
			}
	    } 
}
//FUNCION PRINCIPAL
int main(){
	while(1){
	printf("\t ....ESTA ESTRUCTURA ES UNA COLA CIRCULAR....\n");
	printf("\t1) Ingresar persona a la cola\n");
    printf("\t2) Quitar persona de la cola\n");
	printf("\t3) Salir\n");
	printf("\tElige una opcion: ");
   	scanf("%i",&Opc);
    	printf("\n");
    	switch(Opc){
            case 1: system("cls");
	                if(numElementos<MAX){  
	                	cola=(struct Persona*)realloc(cola,MAX*sizeof(struct Persona));
						if(cola!=NULL){
	                        struct Persona n =llenarPersona();
	                        encolar(n);
	                        i++;
	                    }
	            	}else {printf("##### La cola ya estA llena ####\n");}
	            	imprimirPersona();
                break;
            case 2: 
		if(numElementos!=0){
			desencolar();
		}else printf("La cola esta vacia\n");
		imprimirPersona();
                break;
	    case 3: 
		free(cola);
		return 0;

            default: printf("Opcion invalida\n");
        }
    }
return 0;
}

