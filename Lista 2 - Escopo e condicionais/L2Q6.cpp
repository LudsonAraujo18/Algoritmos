/*A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule 
e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
Professor nível 1  R$ 12,00 por hora aula  
Professor nível 2  R$ 17,00 por hora aula  
Professor nível 3  R$ 25,00 por hora aula */
#include <iostream>
using namespace std;
int main(){
    int nivel;
    float salario, horas;
    cout << " Digite seu nivel como professor (1, 2 ou 3): ";
    cin >> nivel;
    cout << " \nDigite quantas horas/aula voce fez: ";
    cin >> horas;
    if(nivel==1){
        salario = horas*12;
    }   if(nivel==2){
            salario = horas*17;
        }   if(nivel==3){
                salario = horas*25;
            }
    cout << " \nSeu salario eh: R$ " << salario;
    return 0;
}