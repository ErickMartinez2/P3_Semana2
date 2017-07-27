/*
 * Version Recursiva Factorial
 * Version Iterativa Factorial
 * Version Recursiva Sumatoria
 * Version Iterativa Sumatoria
 */
#include <iostream>
using namespace std;

int menu();
int Recursivo_Factorial(int);
void Iterativo_Factorial(int);
int Recursivo_SUmatoria(int);
void Iterativo_Sumatoria(int);

int Recursivo_Factorial(int num){
	if (num == 0) {
		return 1;
	}else {
		return num * Recursivo_Factorial(num - 1);
	}	
}

void Iterativo_Factorial(int num){
	int factorial = 1;
	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}
	cout<<"El factorial de "<<num<<" es: "<<factorial<<endl;
}

int Recursivo_Sumatoria(int num){
	if (num == 0) {
		return 0;
	}else{
		return num + Recursivo_Factorial(num - 1);
	}
}

void Iterativo_Sumatoria(int num){
	int sumatoria = 0;
	for (int i = 1; i <= num; i++) {
		sumatoria += i;
	}
	cout<<"La sumatoria de "<<num<<" es: "<<sumatoria<<endl;
}

int main() {
	int opcion, num;
	do {
		cout<<endl;
		cout<<"   Menu"<<endl
			<<"1. Recursivo Factorial"<<endl
			<<"2. Iterativo Factorial"<<endl
			<<"3. Recursivo Sumatoria"<<endl
			<<"4. Iterativo Sumatoria"<<endl
			<<"5. Salir"<<endl
			<<"Ingrese su opcion: ";
		cin >> opcion;
		if (opcion >= 1 && opcion <=4) {
			 cout << "Ingrese el numero a trabajar: ";
			 cin >> num;
		}
		switch (opcion) {
			case 1:
				cout<<"El factorial de "<<num<<" es: "<<Recursivo_Factorial(num)<<endl;
				break;
			case 2:
				Iterativo_Factorial(num);
				break;
			case 3:
				cout<<"La sumatoria de "<<num<<" es: "<<Recursivo_Sumatoria(num)<<endl;
				break;
			case 4:
				Iterativo_Sumatoria(num);
				break;
			case 5:
				cout<<"Hasta Pronto!"<<endl;
				break;
		}
	} while (opcion != 5);
	return 0;
}
