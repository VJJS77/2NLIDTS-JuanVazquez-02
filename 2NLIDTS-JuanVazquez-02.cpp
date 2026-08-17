#include <iostream>
int casa = 0;
using namespace std;
//funcion secundaria
void funcion_secundario(int numero) {
	cout << "El número recibido es: " << endl;
	cout << numero << endl;
}
int funcion_secundario_dos(int numero_dos) {

	int resultado = 0;
	cout << "el número recibido es: " << endl;
	cout << numero_dos << endl;
	resultado = numero_dos * numero_dos;
	return resultado;
}
//funcion principal
int main()
{
	int valor_recibido;
	int variable = 0;
	cout << "Actividad 02 - programa estructurado básico" << endl;
	cout << "ingrese el valor a imprimir" << endl;
	cin >> variable;
	funcion_secundario(variable);
	valor_recibido = funcion_secundario_dos(variable);
	cout << "el resultado de la multiplicación es: " << endl;
	cout << valor_recibido << endl;
	return 0;

}