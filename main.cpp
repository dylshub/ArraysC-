#include <iostream>


using namespace std;


int main() {

	int limite;
	int indice;
	int valor;
	int mostrar;
	
	cout<<"Ingrese el limite de datos: "<<endl;
	cin>>limite;
	
	int dato[limite]={};
	
	for(indice = 1; indice <= limite; indice++){
		cout<<"INGRESE EL VALOR DEL DATO "<<indice<<endl;
		cin>>valor;
		dato[indice]={valor};
		cout<<"---"<<endl<<endl;
	
	}
	
	cout<<"Ingrese el indice a mostrar";
	cin>>mostrar;
	cout<<"DATO ALMACENADOS EN EL ARRAY "<<dato[mostrar]<<endl;
	return 0;
}

