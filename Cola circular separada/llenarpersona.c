struct Persona llenarPersona(){
	struct Persona P;
    printf("Escribe el nombre de la persona: ");
    scanf("%s",P.nombre);
    printf("Escribe la edad de la persona: ");
    scanf("%d",&P.edad);
    system("cls");
    return P;
}
