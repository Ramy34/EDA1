struct Lista llenarPersona(){
	struct Lista P;
    printf("Escribe el nombre de la persona: ");
    fflush(stdout);
    scanf("%s",P.nombre);
    printf("Escribe la edad de la persona: ");
    fflush(stdout);
    scanf("%d",&P.edad);
    system("cls");
    return P;
}
