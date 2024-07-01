#include <iostream>
using namespace std;

//variable global del saldo
int saldo=0;

//funciones a llamar
void depositar ();
void retirar ();
void mostrarSaldo ();
void menu();

//funcion principal
int main (){
	menu ();
	return 0;
}

void menu (){
	int opcion;
	do {
		cout<<"\t--CAJERO AUTOMATICO--";
		cout<<"\n1. Depositar 100";
		cout<<"\n2. Retirar 100";
		cout<<"\n3. Mostrar saldo";
		cout<<"\n4. Salir";
		cout<<"\nSeleccione una opcion:";
		cin>>opcion;
		switch (opcion){
			case 1:
				depositar ();
				break;
			case 2:
				retirar ();
				break;
			case 3:
				mostrarSaldo ();
				break;
			case 4:
				cout<<"Saliendo..."<<endl;
				break;
			default:
				cout<<"Opcion no valida.\nIntente de nuevo.";		
		}
	} while (opcion !=4);
}


//depositar el dinero
void depositar(){
	saldo += 100;
	cout<<"Se han depositado 100 unidades. \nNuevo saldo:"<<saldo<<endl;
}

//retirar dinero
void retirar (){
	if (saldo >= 100){
		saldo -= 100;
		cout<<"Se han retirado 100 unidades. \nNuevo saldo:"<<saldo<<endl;
	} else {
		cout<<"Saldo insuficiente."<<endl;
	}
}

//mostrar el saldo
void mostrarSaldo (){
	cout<<"Saldo actual:"<<saldo<<endl;
}










