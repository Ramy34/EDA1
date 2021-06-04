#define MAX 5
#define MIN 0
struct Persona *cola=NULL,*tail=NULL,*head=NULL;
int i=0,j=0,k=0,Opc=0,numElementos=0,arr[MAX]={-1,-1,-1,-1,-1};
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

