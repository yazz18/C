#include<stdio.h> //Input Output
#include<math.h>

#define PI 3.1416 //Definiendo una constante 

int main(){
	float area, radio; //declarando variables de tipo constante 
	radio = 5; //asignando valor a variable radio 
	area = PI * pow(5,2); //signando redultado de la operaci�n a variable 
	printf("Area\n"); //imprimiendo titulo 
	//imprimiendo resultado 
	printf("Area de Circulo con radio 5: %f", area);
	return 0;
}
