int borrar(int key){
 if(head==NULL){
  return 0;}
 else{
  struct nodo aux;
  struct nodo ant;
  ant=NULL;
  aux=head;
  do{
   if(key=aux.k){
    if(head=aux){
     head=aux.sucesor;
     aux.sucesor=NULL;}
    else{
     ant.sucesor=aux.sucesor;
     aux.sucesor=NULL;}
    return 1;}
   ant=aux;}
   aux=aux.sucesor;}
  while(aux!=NULL);
  return 0;
 }
}
