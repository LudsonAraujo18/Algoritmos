/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
Obs: Considere cada mês com 30 dias.*/

#include <iostream>
using namespace std;
int main(){
    int anos, meses, dia, dias;
    cout << " \nDigite quantos anos tem: ";
    cin >> anos;
    cout << " \nDigite quantos meses tem: ";
    cin >> meses;
    cout << " \nDigite quantos dias tem: ";
    cin >> dia;
    
    dias = (anos*365)+(meses*30)+dia;
    cout << " \nSua idade expressa em dias eh: " << dias;

    return 0;
}