/*Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.*/

#include <iostream>
using namespace std;
int main(){
    float reais, dolares, cotacao;
    cout << " Digite quantos dolares que converter para reais: ";
    cin >> dolares;
    cout << " \nDigite a cotacao atual: ";
    cin >> cotacao;
    
    reais = dolares*cotacao;
    
    cout << " \nO valor convertido foi: R$ " << reais;
    
    return 0;
}