void mostrarPila(struct nodo al){
 int cont;
 if(entNumElementos==0){
  printf ("Pila vacia.\n");}
 else{
  for(cont=0;cont<entNumElementos;cont++){
   printf("###Elemento %i ###\n",cont);
   printf("Edad: %d\n\n", al.edad[cont]);   
//imprimirNodo(*(pila+cont), cont);
  }
 }
 printf("\n");
}
void imprimirNodo(struct nodo alumno, int i){

    printf("Nombre: %s\n", alumno.nombre);
    printf("Facultad: %s\n", alumno.facultad);
 

}
