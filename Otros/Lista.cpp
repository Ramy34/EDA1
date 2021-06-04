/* Programa en C para implementar listas doblemente enlazadas: provee inserción, eliminación y búsqueda y actualización de nodos*/

#include <stdio.h> 
#include <stdlib.h> 

struct node 
{ 
    struct node *prev; 
    int n; 
    struct node *next; 
}*h,*temp,*temp1,*temp2,*temp4; 

void insert1(); 
void insert2(); 
void insert3(); 
void traversebeg(); 
void traverseend(int); 
void sort(); 
void search(); 
void update(); 
void deletee(); 

int count = 0; 

int main(void) 
{ 
    int ch; 

    h = NULL; 
    temp = temp1 = NULL; 

    printf("1 - Insertar al comienzo\n"); 
    printf("2 - Insertar al final\n"); 
    printf("3 - Insertar en la posicion i\n"); 
    printf("4 - Eliminar en la posicion i\n"); 
    printf("5 - Mostrar desde el principio\n"); 
    printf("6 - Mostrar desde el final\n"); 
    printf("7 - Buscar un elemento\n"); 
    printf("8 - Ordenar la lista\n"); 
    printf("9 - Actualizar un elemento\n"); 
    printf("10 -Salir\n"); 

    while (1) 
    { 
        printf("Ingrese opcion : "); 
        scanf("%d", &ch); 
        switch (ch) 
        { 
        case 1: 
            insert1(); 
            break; 
        case 2: 
            insert2(); 
            break; 
        case 3: 
            insert3(); 
            break; 
        case 4: 
            deletee(); 
            break; 
        case 5: 
            traversebeg(); 
            break; 
        case 6: 
            temp2 = h; 
            if (temp2 == NULL) 
                printf("Error : Lista a mostrar vacia \n"); 
            else 
            { 
                printf("El orden invertido de la lista enlazada es : \n"); 
                traverseend(temp2->n); 
            } 
            break; 
        case 7: 
            search(); 
            break; 
        case 8: 
            sort(); 
            break; 
        case 9: 
            update(); 
            break; 
        case 10: 
            exit(0); 
        default: 
            printf("Elección errónea\n"); 
            break; 
        } 
    } 


    return 0; 
} 

/* Para crear un nodo vacio*/ 
void create() 
{ 
    int data; 

    temp =(struct node *)malloc(1*sizeof(struct node)); 
    temp->prev = NULL; 
    temp->next = NULL; 
    printf("Ingrese el valor al nodo: "); 
    scanf("%d", &data); 
    temp->n = data; 
    count++; 
} 

/*  Para insertar al comienzo*/ 
void insert1() 
{ 
    if (h == NULL) 
    { 
        create(); 
        h = temp; 
        temp1 = h; 
    } 
    else 
    { 
        create(); 
        temp->next = h; 
        h->prev = temp; 
        h = temp; 
    } 
} 

/*  Para insertar al final*/ 
void insert2() 
{ 
    if (h == NULL) 
    { 
        create(); 
        h = temp; 
        temp1 = h; 
    } 
    else 
    { 
        create(); 
        temp1->next = temp; 
        temp->prev = temp1; 
        temp1 = temp; 
    } 
} 

/* Para insertar en cualquier posición*/ 
void insert3() 
{ 
    int pos, i = 2; 

    printf("Ingrese la posicion donde sera insertado el nodo : "); 
    scanf("%d", &pos); 
    temp2 = h; 

    if ((pos < 1) || (pos >= count + 1)) 
    { 
        printf("Posición para insertar fuera de rango"); 
        return; 
    } 
    if ((h == NULL) && (pos != 1)) 
    { 
        printf("En la lista vacia no se puede insertar mas que en la primera posicion\n"); 
        return; 
    } 
    if ((h == NULL) && (pos == 1)) 
    { 
        create(); 
        h = temp; 
        temp1 = h; 
        return; 
    } 
    else 
    { 
        while (i < pos) 
        { 
            temp2 = temp2->next; 
            i++; 
        } 
        create(); 
        temp->prev = temp2; 
        temp->next = temp2->next; 
        temp2->next->prev = temp; 
        temp2->next = temp; 
    } 
} 

/* Para eliminar un elemento */ 
void deletee() 
{ 
    int i = 1, pos; 

    printf("Ingrese la posicion del nodo a ser eliminado: "); 
    scanf("%d", &pos); 
    temp2 = h; 

    if ((pos < 1) || (pos >= count + 1)) 
    { 
        printf("Error : Posicion a eliminar fuera de rango\n"); 
        return; 
    } 
    if (h == NULL) 
    { 
        printf("Error : Lista vacia, no hay elementos que eliminar\n"); 
        return; 
    } 
    else 
    { 
        while (i < pos) 
        { 
            temp2 = temp2->next; 
            i++; 
        } 
        if (i == 1) 
        { 
            if (temp2->next == NULL) 
            { 
                printf("Nodo eliminado de la lista\n"); 
                free(temp2); 
                temp2 = h = NULL; 
                return; 
            } 
        } 
        if (temp2->next == NULL) 
        { 
            temp2->prev->next = NULL; 
            free(temp2); 
            printf("Nodo eliminado de la lista\n"); 
            return; 
        } 
        temp2->next->prev = temp2->prev; 
        if (i != 1) 
            temp2->prev->next = temp2->next;    /* Esto no será necesario si vale i == 1  */ 
        if (i == 1) 
            h = temp2->next; 
        printf("Nodo eliminado\n"); 
        free(temp2); 
    } 
    count--; 
} 

/* Traverse desde el comienzo*/ 
void traversebeg() 
{ 
    temp2 = h; 

    if (temp2 == NULL) 
    { 
        printf("La lista a mostrar esta vacia\n"); 
        return; 
    } 
    printf("Elementos de la lista enlazada desde el comienzo : "); 

    while (temp2->next != NULL) 
    { 
        printf(" %d ", temp2->n); 
        temp2 = temp2->next; 
    } 
    printf(" %d ", temp2->n); 
} 

/* To traverse from end recursively */ 
void traverseend(int i) 
{ 
    if (temp2 != NULL) 
    { 
        i = temp2->n; 
        temp2 = temp2->next; 
        traverseend(i); 
        printf(" %d ", i); 
    } 
} 

/* Para buscar un elemento de la lista */ 
void search() 
{ 
    int data, count = 0; 
    temp2 = h; 

    if (temp2 == NULL) 
    { 
        printf("Error : La lista esta vacía para buscar datos\n"); 
        return; 
    } 
    printf("Ingrese el valor a buscar : "); 
    scanf("%d", &data); 
    while (temp2 != NULL) 
    { 
        if (temp2->n == data) 
        { 
            printf("Dato encontrado en la posicion %d \n",count + 1); 
            return; 
        } 
        else 
             temp2 = temp2->next; 
            count++; 
    } 
    printf("Error : %d no fue encontrado en la lista\n", data); 
} 

/* Para actualizar el valor de un nodo en la lista*/ 
void update() 
{ 
    int data, data1; 

    printf("Ingrese el nodo a ser actualizado: "); 
    scanf("%d", &data); 
    printf("\nIngrese el nuevo dato : "); 
    scanf("%d", &data1); 
    temp2 = h; 
    if (temp2 == NULL) 
    { 
        printf("\nError : Lista vacia, no hay nodo que actualizar\n"); 
        return; 
    } 
    while (temp2 != NULL) 
    { 
        if (temp2->n == data) 
        { 

            temp2->n = data1; 
            traversebeg(); 
            return; 
        } 
        else 
            temp2 = temp2->next; 
    } 

    printf("Error : %d no fue encontado en la lista para actualizarlo\n", data); 
} 

/* Para ordenar la lista enlazada */ 
void sort() 
{ 
    int x; 

    temp2 = h; 
    temp4 = h; 

    if (temp2 == NULL) 
    { 
        printf("La lista esta vacia para ordenar\n"); 
        return; 
    } 

    for (temp2 = h; temp2 != NULL; temp2 = temp2->next) 
    { 
        for (temp4 = temp2->next; temp4 != NULL; temp4 = temp4->next) 
        { 
            if (temp2->n > temp4->n) 
            { 
                x = temp2->n; 
                temp2->n = temp4->n; 
                temp4->n = x; 
            } 
        } 
    } 
    traversebeg(); 

}
