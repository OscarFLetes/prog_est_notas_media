/*Autor: Oscar Eduardo FLetes Ixta, elavorado el 21/02/222
	Programa que pide cuantas notas quiere insertar y calcular la media 
	
	Programa en lenguaje c que pide las notas a calcular, luego se insertan las notas y se calcula la media, con uso de scanf,
	uso del ciclo for, y operaciones aritmeticas. 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float, int
		* Uso de scanf
		* Uso del ciclo for
		* Operaciones aritemticas
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, int, uso del scanf, uso del ciclo for, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 1 variable del tipo int (notas a calcular)
	El programa pide cuantas notas quiere insertar y calcular la media
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//Variables 
	int notas;//Variables enteras
	float media=0, suma=0, nota;//Variables con decimal
	//Entrada 
	printf("Cuantas notas quiere calcular: ");//imprime mensaje
	scanf("%d",&notas);//lee el numero insertado por el teclado
	//Proceso
	for(int i=1;i<=notas;i++){//ciclo for
		printf("Nota %d:",i);//imprime mensaje, i cuenta las notas insertadas 
		scanf("%f",&nota);//lee el numero insertado por el teclado
		suma+=nota;//suma las notas
		media=suma/notas;//calcual la media de las notas 
	}
	//Salida
	printf("La media de las notas es: %.2f",media);//imprime la saldia de la media 

	
	 
	return 0;
}
