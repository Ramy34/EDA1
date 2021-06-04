#define MAX 5
struct nodo *pila=NULL;
struct nodo *tope=NULL;
int entNumElementos=0;
struct nodo push(struct nodo alumno){
 if(entNumElementos==MAX){
  printf("Error pila llena.\n");
  return ;
 }
 else{
   pila=&alumno;
   alumno.sucesor=tope;
   tope=&alumno;
   entNumElementos++;
   return alumno;
 }
 }
