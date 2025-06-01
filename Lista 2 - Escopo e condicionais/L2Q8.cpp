/*Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e 
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada.*/
#include <iostream>
using namespace std;
int main(){
    int N, sucessores, antecessores;
    char letra;
    cout << " Digite qualquer numero inteiro: ";
    cin >> N;
    cout << " \nDigite (a) para ver os antecessores ou (s) para ver os sucessores do numero: ";
    cin >> letra;

    if(letra == 'a'){
        antecessores = (N-1)+(N-2)+(N-3)+(N-4)+(N-5)+(N-6)+(N-7)+(N-8)+(N-9)+(N-10);
        cout << " \nA soma dos 10 antecessores eh: " << antecessores;
    }   if(letra == 's'){
            sucessores = (N+1)+(N+2)+(N+3)+(N+4)+(N+5)+(N+6)+(N+7)+(N+8)+(N+9)+(N+10);
            cout << " \nA soma dos 10 sucessores eh: " << sucessores;
        }
    return 0;
}