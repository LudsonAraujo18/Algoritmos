/*Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e 
escreva-os na ordem solicitada.*/
#include <iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    char ordem;
    cout << " Digite tres numeros inteiros: \n";
    cin >> n1 >> n2 >> n3;
    cout << " \nDigite a ordem que deseja, (c) para crescente e (d) para decrescente: ";
    cin >> ordem;
    if(ordem == 'c'){
        if((n1>n2)&&(n2>n3)){
            cout << " \nA ordem decrescente eh: " << n3 << "; " << n2 << "; " << n1;
        }   if((n1>n3)&&(n3>n2)){
                cout << " \nA ordem decrescente eh: " << n2 << "; " << n3 << "; " << n1;
            }   if((n2>n1)&&(n1>n3)){
                    cout << " \nA ordem decrescente eh: " << n3 << "; " << n1 << "; " << n2;
                }   if((n2>n3)&&(n3>n1)){
                        cout << " \nA ordem decrescente eh: " << n1 << "; " << n3 << "; " << n2;
                    }   if((n3>n1)&&(n1>n2)){
                                cout << " \nA ordem decrescente eh: " << n2 << "; " << n1 << "; " << n3;
                            }   if((n3>n2)&&(n2>n1)){
                                    cout << " \nA ordem decrescente eh: " << n1 << "; " << n2 << "; " << n3;
                                }
        }if(ordem == 'd'){
            if((n1>n2)&&(n2>n3)){
                cout << " \nA ordem crescente eh: " << n1 << "; " << n2 << "; " << n3;
            }   if((n1>n3)&&(n3>n2)){
                    cout << " \nA ordem crescente eh: " << n1 << "; " << n3 << "; " << n2;
                }   if((n2>n1)&&(n1>n3)){
                        cout << " \nA ordem crescente eh: " << n2 << "; " << n1 << "; " << n3;
                    }   if((n2>n3)&&(n3>n1)){
                            cout << " \nA ordem crescente eh: " << n2 << "; " << n3 << "; " << n1;
                        }   if((n3>n1)&&(n1>n2)){
                                    cout << " \nA ordem crescente eh: " << n3 << "; " << n1 << "; " << n2;
                                }   if((n3>n2)&&(n2>n1)){
                                        cout << " \nA ordem crescente eh: " << n3 << "; " << n2 << "; " << n1;
                                    }
        }
    return 0;
}