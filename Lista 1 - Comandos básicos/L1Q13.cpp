/*Leia os valores dos lados de um retângulo, calcule e escreva sua área.*/
#include <iostream>
using namespace std;
int main(){
    float base, altura, area;
    cout << " Digite o valor da base: ";
    cin >> base;
    cout << " \nDigite o valor da altura: ";
    cin >> altura;

    area = base*altura;

    cout << " \nA area do retangulo eh: " << area;

    return 0;
}