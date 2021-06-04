#include<stdio.h>
#include<stdlib.h>
struct Persona{
	int edad;
    char nombre[30];
    struct Persona *sucesor;
};
