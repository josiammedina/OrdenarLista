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
	
	while(i<=cant){
		actual=(struct nodo*)malloc(sizeof(struct nodo));
		actual->siguiente=primero;			//
		cout<<"Digitar datos: ";			//Imprimir por pantalla pedido de digitar datos
		cin>>dato;					//
		actual->num=dato;				//
		primero=actual;					//
		i++;
	}		
	cout<<"Listado de Datos: ";				//Imprimimos por pantalla titulo Listado de Datos
	while(actual!=NULL){					//El apuntador nodo ira al siguiente hasta encontrar NULL y detenerse
	cout << actual->num << ", ";	
	actual=actual->siguiente;
	}
	
	system("pause>>NULL");	
	
};
