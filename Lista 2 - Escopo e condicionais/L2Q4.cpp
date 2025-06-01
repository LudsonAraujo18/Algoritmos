/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre  o  preço  do  carro.  Elabore  um  algoritmo  que  leia  o  ano  e  o  preço  do  carro,  calcule  e  escreva  o 
imposto a ser pago.*/
#include <iostream>
using namespace std;
int main(){
    int ano;
    float precoCarro, imposto;
    cout << " Digite o ano do seu carro: ";
    cin >> ano;
    cout << " \nDigite o preco do seu carro: ";
    cin >> precoCarro;
    if(ano<1990){
        imposto = precoCarro*0.01;
        cout << " \nO imposto a ser pago vai ser: " << imposto << " Reais";
    }   if(ano>=1990){
        imposto = precoCarro*0.015;
        cout << " \nO imposto a ser pago vai ser: " << imposto << " Reais";
    }
    return 0;
}