#include <iostream>
#include <iomanip>
using namespace std;
main ( )
{
	//Permite utilizar dos caracteres especiais
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float picole1, picole2, picole3, qtd1, qtd2, qtd3, total1, total2, total3, total;

    // Entrada
    picole1 = 0.50;
    picole2 = 0.60;
    picole3 = 0.75;
    
    cout << "Insira a quantidade comprada do primeiro picolé: ";
    cin >> qtd1;
    cout << "Insira a quantidade comprada do segundo picolé: ";
    cin >> qtd2;
    cout << "Insira a quantidade comprada do terceiro picolé: ";
    cin >> qtd3;

    // Processamento
    total1 = picole1 * qtd1;
    total2 = picole2 * qtd2;
    total3 = picole3 * qtd3;
    total = total1 + total2+ total3;

    // Saída
    cout << "\n-----------------------------------" << endl;
    cout << "O valor total dos picolés foi: R$ " << total << endl;
    cout << "-----------------------------------" << endl;
}	
