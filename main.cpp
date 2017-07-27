#include <iostream>
using namespace std;

int menu();
void leerElementos(int[], int);
void imprimirElementos(int[], int);

void leerElementos(int arreglo[], int size){
	for (int i = 0; i < size; i++) { 
		cout<<"Ingrese el valor para la casilla "<<i<<": ";
		cin>>arreglo[i];
	}
}

void imprimirElementos(int arreglo[], int size){
    cout<<"Elementos = ";
    for (int i = 0; i < size; i++) {
        cout<<"("<<arreglo[i]<<")";
    }
    cout<<endl;  
}

int main(){
	int opcion, size;
    cout<<"-> Elementos Dinamicos"<<endl;
    cout<<"Ingrese el tamaño el arreglo: ";
    cin>>size;
    int array[size];
    do {
        opcion = menu();
        switch (opcion) {
            case 1:
                leerElementos(array,size);
                break;
            case 2:
	            imprimirElementos(array,size);
                break;
        }
    } while (opcion != 3);
    return 0;
}

int menu(){
	int opcion = 0;
	while (opcion == 0) {
		cout<<" MENU"<<endl
		<<"1. Leer Elementos"<<endl
		<<"2. Imprimir ELementos"<<endl
		<<"3. Salir"<<endl
		<<"Ingrese una opcion: ";
		cin >> opcion;
		if (opcion < 1 || opcion > 3) {
			cout<<"La opcion ingresada no es valida!"<<endl;
			cout<<"Intente nuevamente."<<endl;
			opcion = 0;
		}		
	}
	return opcion = 0;
}

