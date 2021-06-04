void imprimirPersona(){
	    for(j=0;j<MAX;j++){
	    	if(arr[j]!=-1){
				printf("\t...Persona(%i)...\n",j+1);
		        printf("El nombre es: %s\n",cola[arr[j]].nombre);
		        printf("La edad es: %d\n",cola[arr[j]].edad);
			}
	    } 
}
