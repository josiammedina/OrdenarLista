//Estructura de Datos y Algoritmos ISW-305
//Facilitador Maikel Aparicio
//1er Seminario, Ordenar listas, Equipo II
//Sustentado por: Abraham Pineda, Teddy Paulino, Jose Ruiz y Jose Anibal Medina

#include <iostream>				//Declaracion de las librerias que estaremos utilizando
#include <stdlib.h>		

using namespace std;

struct nodo {
	int dato;				//En dicha variable guardaremos los contenidos de los nodos
	struct nodo *siguiente;			//Este es el puntero Siguiente
				
};

main(){
	struct nodo *primero;			//Asignado al primer nodo
	struct nodo *actual	;		//Asignado a los nuevos nodos que se van creando
	primero = NULL;				//Declaramos primero como NULL
	int dato;				//Variable donde almanecaremos los datos 
	int cant;
	int i=1;
	cout <<"Digitar cantidad de nodos: ";	//Imprimir por pantalla pedido de digitar cantidad de nodos
	cin>>cant;
	
};
