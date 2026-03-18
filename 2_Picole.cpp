#include <iostream>
#include <iomanip>
using namespace std;
main ( )
{
	//Permite utilizar dos caracteres especiais
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float salario, carros, comissao, salario_total;
	string nome;

    // Entrada
    salario = 350;
    
    cout << "Insira o nome do vendedor: ";
    cin >> nome;
    cout << "Insira a quantidade de carros vendidos: ";
    cin >> carros;

    // Processamento
    comissao = carros * 50 * 1.05;
    salario_total = comissao + salario;

    // Saída
    cout << "\n-----------------------------------" << endl;
    cout << nome << endl;
    cout << "Quantidade de carros vendidos: " << carros << endl;
    cout << "Salário final recebido: R$" << salario_total << endl;
}	
