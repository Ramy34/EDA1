#include"nodo.c"
#include"encolar.c"
#include"desencolar.c"
#include"llenarpersona.c"
#include"imprimirpersona.c"
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
            case 1: system("clear");
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
