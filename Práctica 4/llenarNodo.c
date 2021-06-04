#include"nodo.c"
 *nombre[]={"Refresco","Leche","Goma","Botella de agua","Paleta","Pluma","Escoba","Lazo","Zapatos","Chamarra","Galletas","Jugo","Papas","Cuadernos","Lapicera"};
 *descripcion[]={"Sabroso y refrescante","Baja en grasas","Para Borrar sin dejar rayones","Agua de manantial","Sabor fresa","Paquete de de plumas de diferentes colores","Practica para limpiar el hogar","Muy resistente","Bonitos y comodos","De piel de alta calidad","Galletas de chocolate","De diferentes sabores","Para el antojo","Excenlente calidad y de 200 hojas","Guarda tus utiles"};
 float precio[]={10.0,15.4,3.5,6.0,5.3,16.7,10.0,30.5,299.9,159.9,7.5,14.3,10.9,25.0,12.8};
struct nodo agregarNodo(){
	struct nodo tmp;
	printf("Escribe el id del producto:");
	scanf("%d",&tmp.id);
	printf("Ingresa la cantidad:");
	scanf("%d",&tmp.cantidad);
	return tmp;
}
