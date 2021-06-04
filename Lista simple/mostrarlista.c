void mostrarLista(int numElementos,struct Lista *nuevo){
	struct Lista *imp;
	int i=1;
	imp=nuevo;
	if(numElementos==0){
		printf("Lista Vacia.\n");}
	else{	
	 while(imp!=NULL){
		printf("Elemento %d\n",i);
		printf("Nombre: %s\n",imp->nombre);
		printf("Edad: %d\n",imp->edad);
		imp=imp->sucesor;
		i++;};
		
   }
}

