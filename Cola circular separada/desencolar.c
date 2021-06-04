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
