/*Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da 
pessoa mais velha e a idade da pessoa mais nova.*/
#include <iostream>
using namespace std;
int main(){
    int codigo, idade, codVelha, idadeNova = 0, idadeVelha = 0,  cont;
    for(cont=1; cont<=100; cont++){
        cout << " \nDigite seu codigo: ";
        cin >> codigo;
        cout << " \nDigite sua idade: ";
        cin >> idade;

        idadeNova = idade;

        if(idade>idadeVelha){
            idadeVelha = idade;
            codVelha = codigo;
        }   if(idadeNova>idade){
                idadeNova = idade;
            }
    }
    cout << " \nO codigo da pessoa mais velha eh: " << codVelha;
    cout << " \nA idade da pessoa mais nova eh: " << idadeNova;
    return 0;
}