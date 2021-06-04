void imprimirLista(){
	int i;
	for(i=0;i<15;i++){
		printf("ID=%i\n",i);
		printf("Nombre:%s\n",nombre[i]);
		printf("Descripcion:%s\n",descripcion[i]);
		printf("Precio: %.2f\n",precio[i]);
		printf("\n");
	}
}
