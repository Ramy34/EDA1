#include<stdio.h>
#include<stdlib.h>

int main(){
    int e,i,j,k=0,l=0;
    char abc[25]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','w','x','y','z'};
    char ab[5][5];
    char men[100];
    char me;
    int lar;
    int largo=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            ab[i][j]=abc[k];
            k++;
        }
    }
    printf("Dame un mensaje a codificar: ");
    scanf("%s",men);
    while(men[largo]!='\0'){
        largo++;
    }
    e=0;
    printf("El mensaje codificado es: ");
    while(largo!=e){
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                if(men[l]==ab[i][j]){
                    printf("%d%d",i,j);
                    l++;
                    e++;
                    }
                }
            }
        }
        printf("\n");
        system("pause");
        return 0;   
}
