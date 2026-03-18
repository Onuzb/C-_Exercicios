#include <iostream>
#include <iomanip>
using namespace std;
main ( )
{
	//Permite utilizar dos caracteres especiais
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float dia_nasc, mes_nasc, ano_nasc, ano_atual, mes_atual, dia_atual, total_nasc, total_atual, dias;

    // Entrada
    cout << "Calculadora de dias vividos" << endl;
	cout << "__________________________________________" << endl;
    cout << "Digite o dia de seu nascimento: ";
    cin >> dia_nasc;
    cout << "Digite o mês de seu nascimento: ";
	cin >> mes_nasc;
	cout << "Digite o ano de seu nascimento: ";
	cin >> ano_nasc;
	cout << endl;
	cout << "Digite o dia de hoje: ";
    cin >> dia_atual;
    cout << "Digite o mês atual: ";
	cin >> mes_atual;
	cout << "Digite o ano atual: ";
	cin >> ano_atual;

    // Processamento
	total_nasc = (ano_nasc * 360) + (mes_nasc * 30) + dia_nasc;
	total_atual = (ano_atual * 360) + (mes_atual * 30) + dia_atual;
	dias = total_atual - total_nasc;
	
    // Saída
    cout << "\n-----------------------------------" << endl;
    cout << "Sabendo que sua data de nascimento é: " << dia_nasc << "/" << mes_nasc << "/" << ano_nasc << endl;
	cout << "O total de dias vividos é: " << dias << endl;
}	
