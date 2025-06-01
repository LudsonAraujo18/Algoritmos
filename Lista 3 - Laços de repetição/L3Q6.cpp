/*Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa.  Se  após  três  tentativas o  jogador  não  descobrir o  número, então  ele  perde o  jogo.  Faça  um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro 
do algoritmo e não estará visível para o usuário.*/
#include <iostream>
using namespace std;
int main(){
    int numero = 7, tentativa, cont;
    for(cont = 1; cont <=3; cont ++){
        cout << " \nDigite um numero de 1 a 10: ";
        cin >> tentativa;
        if(tentativa==numero){
            cout << " \nO numero foi descoberto.";
            break;
        }
        if(tentativa<numero){
            cout << " O numero eh maior que " << tentativa << " \n";
        }
        if(tentativa>numero){
            cout << " O numero eh menor que " << tentativa << " \n";
        }
    }
    if(tentativa!=numero){
        cout << " \nVoce perdeu. :( ";
    }
    return 0;
}