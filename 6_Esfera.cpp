#include <iostream>
#include <iomanip>
using namespace std;
main ( )
{
	//Permite utilizar dos caracteres especiais
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float pi, raio, volume;

    // Entrada
    cout << "Defina valor de pi: ";
    cin >> pi;
    cout << "Insira o valor do raio: ";
	cin >> raio;

    // Processamento
	volume = (4 * pi * (raio * raio * raio)) / 3;

    // Saída
    cout << "\n-----------------------------------" << endl;
	cout << "O valor do volume desta esfera é: " << volume << endl;
}	
