struct Lista *head= NULL,*nuevo;
int numElementos=0;
int insertar(){
	nuevo=(struct Lista *) malloc (sizeof(struct Lista));
    if (nuevo==NULL){
	 printf("No hay espacio en memoria.\n");
	 return 0;}
     else{
           struct Lista n = llenarPersona();
           if(head==NULL){
            head=&n;
			nuevo=&n;
            n.sucesor=NULL;
			numElementos++;}
           else{
              head->sucesor=head;
              head=&n;
			  nuevo=&n;}
              numElementos++;}
              return 1;}
