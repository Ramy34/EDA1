#include <stdio.h>
#include "cifrarMensaje.c"
int main(){int x;
	char paClabc[]={'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char der[26],M[100],reves[26];
	char abc[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("\t...ESTE PROGRAMA CIFRA Y DESCIFRA UN MENSAJE...\n");
	scanf("%d",&x);
	switch(x){
		case 1:cifrarMensaje(*paClabc,*der,*M,*reves);
		break;
		case 2:descifrarMensaje();
		break;
		case 3:return;
		default:printf("OpciOn invAlida"); 
		}
}
