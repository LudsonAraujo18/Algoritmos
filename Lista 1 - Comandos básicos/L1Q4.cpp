/*Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número*/
#include <iostream>
using namespace std;
int main(){
    int N;
    float percentual, valorAplicado;
    cout << " Digite um numero inteiro: ";
    cin >> N;
    cout << " \nDigite um percentual para ser aplicado: ";
    cin >> percentual;
    
    valorAplicado = N*(percentual/100);
    cout << " O valor do percentual aplicado ao numero eh: " << valorAplicado;

    return 0;
}