void imprimirNodo(struct nodo n){
	printf("\t##############\n");
	printf("Nombre del articulo...........%s\n",nombre[n.id]);
	printf("Descripcion del articulo......%s\n",descripcion[n.id]);
	printf("Precio........................%.2f\n",precio[n.id]);
	printf("Cantidad......................%i\n",n.cantidad);
	printf("Subtotal......................%.2f\n\n",precio[n.id]*n.cantidad);

}
