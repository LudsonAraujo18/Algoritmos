/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores 
positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 
é perfeito, pois 1+2+3 = 6.*/
#include <iostream>
using namespace std;
int main(){
    int n, cont, aux;
    char resposta;
    do{
        cout << " digite o numero inteiro positivo: ";
        cin >> n;
        aux = 0;
        for(cont = 1; cont <=n; cont ++){
            if(n%cont == 0){
                if(n!=cont){
                    aux = aux + cont;
                }
            }
        }
        if(n==aux){
            cout << " \nO numero " << n << " eh perfeito.";
        } else{
            cout << " \nEsse numero nao eh perfeito.";
        }
        cout << " \nDigite (s) para sim e (n) para nao, se ainda deseja digitar outro numero: ";
        cin >> resposta;
    }while(resposta=='s');
    return 0;
}