#include <iostream>
#include <iomanip>
using namespace std;
main ( )
{
	//Permite utilizar dos caracteres especiais
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float salar_br, ir1, ir2, previ1, previ2, salar_2, salar_liq;
	string nome;

    // Entrada
    previ1 = 0.9;
    ir1 = 0.75;
    cout << "Insira o nome do funcionário: ";
    cin >> nome;
    cout << "Insira o salário bruto do funcionário: ";
	cin >> salar_br;

    // Processamento
    salar_2 = salar_br * previ1;
    salar_liq = salar_2 * ir1;
    previ2 = salar_br * 0.1;
    ir2 = salar_2 * 0.25;

    // Saída
    cout << "\n-----------------------------------" << endl;
    cout << "Funcionário: " << nome << endl;
    cout << "O " << nome << " possui de salário bruto: " << salar_br << endl;
    cout << "Valor gasto na Previdência: " << previ2 << endl;
    cout << "Valor gasto no Imposto de Renda: " << ir2 << endl;
    cout << "Salário Líquido de " << nome << " é: " << salar_liq << endl;
}	
