struct nodo pop(){
 if (entNumElementos==0){
  printf("Error pila vacia.\n");
  return ;
  }
 else{
  struct nodo aux;
  aux=*tope;
  tope=aux.sucesor;
  aux.sucesor=NULL;
  entNumElementos--;
  printf("Elemento sacado.\n");
  return aux;
  }
}
