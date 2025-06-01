/*Leia  dois  valores  reais  para  as  variáveis  A  e  B  e  efetue  as  operações  de  adição,  subtração, 
multiplicação  e  resto  da  divisão  de  A  por  B,  apresentando  ao  final  os  resultados  obtidos.  Em 
seguida  leia  dois  valores  lógicos  C  e  D  e  efetue  as  operações  de  negação  (de  cada  um  dos 
valores), conjunção (E) e disjunção (OU), apresentando ao final os resultados obtidos.*/

#include <iostream>
using namespace std;
int main(){
    int A2, B2;
    float A, B, adi, sub, multi, divi;
    bool C, D;
    cout << " Digite um valor real para A: ";
    cin >> A;
    cout << " \nDigite um valor real para B: ";
    cin >> B;

    A2 = A;
    B2 = B;
    
    adi = A + B;
    sub = A - B;
    multi = A * B;
    divi = A2%B2;
    
    cout << "\nAdicao: " << adi;
    cout << "\nSubtracao: " << sub;
    cout << "\nMultiplicacao: " << multi;
    cout << "\nDivisao: " << divi;

    cout << " \nDigite um valor logico para C (1-true e 0-false): ";
    cin >> C;
    cout << " \nDigite um valor logico para C (1-true e 0-false): ";
    cin >> D;

    cout << " \nC: " << C;
    cout << " \nD: " << D;

    cout << " \nNegacao C: " << !C;
    cout << " \nNegacao C: " << !D;
    cout << " \nConjuncao de C e D: " << C&&D;
    cout << " \nDisjuncao de C e D: " << C||D;

    return 0;
}