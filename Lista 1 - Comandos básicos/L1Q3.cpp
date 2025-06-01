/*Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros.*/

#include <iostream>
using namespace std;
int main(){
    int quantidadeParcela;
    float valorCompra, valorPrestacoes;
    cout << " Digite o valor da sua compra na Loja Sua Melhor Compra: ";
    cin >> valorCompra;
    cout << " \nDigite quantas parcelas deseja (voce pode parcelar em ate 10 vezes sem juros): ";
    cin >> quantidadeParcela;
    
    valorPrestacoes = valorCompra/quantidadeParcela;
    cout << " \nO valor por parcela foi: " << valorPrestacoes;
    
    return 0;
}