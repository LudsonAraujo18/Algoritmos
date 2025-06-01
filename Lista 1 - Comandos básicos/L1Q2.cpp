/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações: número de anos que ele fuma, quantidade de cigarros fumados por dia e preço de
uma carteira (contendo 10 cigarros). */

#include <iostream>
using namespace std;
int main(){
    int anosFumados, cigarrosPorDia;
    float valorCarteira, valorGasto;
    
    cout << " Digite a quantos anos voce fuma: ";
    cin >> anosFumados;
    cout << " \nDigite quantos cigarros voce fuma por dia: ";
    cin >> cigarrosPorDia;
    cout << " \nDigite o valor da carteira de cigarro: ";
    cin >> valorCarteira;
    
    valorGasto = ((valorCarteira/10) * cigarrosPorDia) * (anosFumados*365);
    
    cout << " \nO valor gasto em cigarros foi: " << valorGasto;
    
    return 0;
}