#include <iostream>
#include <iomanip>
using namespace std;
main ( )
{
	//Permite utilizar dos caracteres especiais
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float km, km_i, km_f, litros, km_litros;
	string marca;

    // Entrada
    
    cout << "Insira a marca do carro: ";
    cin >> marca;
    cout << "Insira a quantidade da quilometragem do carro no início da viagem: ";
    cin >> km_i;
    cout << "Insira a quantidade da quilometragem no final da viagem: ";
    cin >> km_f;
    cout << "Insira a quantidade de litros usados durante a viagem: ";
    cin >> litros;

    // Processamento
    km = km_f - km_i;
    km_litros = km / litros;

    // Saída
    cout << "\n-----------------------------------" << endl;
    cout << "Marca do carro: " << marca << endl;
    cout << "Quantidade de quilômetros percorridos: " << km << endl;
    cout << "Quantidade de litros utilizados: " << litros << endl;
    cout << "O carro " << marca << " faz " << km_litros << " quilômetros por litro." << endl;
}	
