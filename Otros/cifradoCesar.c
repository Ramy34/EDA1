#include<stdio.h>
char cifradoCesar(){
	printf("Por favor escribe una palabra clave (Maximo 26 caracteres):");
	gets(paClabc);
	printf("Ahora por favor dame un mensaje a cifrar:");
	gets(M);
	//llenar abc y mater
	int i,j,k=0;
	for(i=0;i<52;i++){j=i;
		while(j<52){
			if(i!=j){
				if(paClabc[i]==paClabc[j]){
					paClabc[j]='\0';
				}
				j++;
			}
			else
			j++;
		}	
	}
	

	//Llenar der
			for(j=0;j<26;j++){
			if(paClabc[k]!='\0'){
				der[j]=paClabc[k];
				k++;}
				else{
				k++;
				j--;
				}
			}
			for(i=0,j=25;i<26;i++){
				reves[i]=der[j];
				j--;
			}
		printf("El arreglo ordenado");
		for(i=0;i<26;i++){
			printf("[%c]",reves[i]);}
     return reves;
}
