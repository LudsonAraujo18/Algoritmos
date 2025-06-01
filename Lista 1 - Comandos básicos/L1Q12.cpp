/*Leia dois números inteiros quaisquer e escreva a soma entre os três sucessores do primeiro e os 
dois antecessores do segundo. */

#include <iostream>
using namespace std;
int main(){
    int A, B, soma;
    cout << " Digite dois numero quaisquer: ";
    cin >> A >> B;
    A = (A+1) + (A+2) + (A+3);
    B = (B-1) + (B-2);

    soma = A + B;

    cout << " \nA soma dos tres sucessores e dos dois antecessores de A e B eh: " << soma;

    return 0;
}