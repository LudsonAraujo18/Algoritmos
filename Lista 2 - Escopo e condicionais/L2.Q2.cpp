/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é 
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo.*/
#include <iostream>
using namespace std;
int main(){
    int N;
    cout << " Digite um numero: ";
    cin >> N;
    if(N%2==0){
        if(N>100){
            cout << " Esse numero eh par e maior que 100.";
        } else{
                cout << " Esse numero eh par e menor que 100.";
        }
    } else{
            if(N>0){
                cout << " Esse numero eh impar e positivo."; 
            } else{
                cout << " Esse numero eh impar e negativo.";
            }
    }
    return 0;
}