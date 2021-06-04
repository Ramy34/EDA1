struct nodo buscar(int key){
 if(head==NULL){
  return NULL;}
 else{
  struct nodo aux;
  aux=head;
  do{
   if (key==aux.k){
    return aux;}
   aux=aux.sucesor;}
  while(aux.sucesor!=NULL);
  retrun NULL;
 }
}
