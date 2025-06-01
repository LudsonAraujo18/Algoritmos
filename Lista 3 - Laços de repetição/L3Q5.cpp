/*Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, 
até  que  seja  digitada  uma média  negativa.  Ao  final,  o  algoritmo  deve mostrar  a quantidade  de  alunos 
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar 
as matrículas de todos os alunos que obtiveram médias superiores a 9.*/
#include <iostream>
using namespace std;
int main(){
    int matricula, maisQ9, apro = 0, repro = 0, rec = 0;
    float media, aux;
    do{
        cout << " \nDigite sua matricula: ";
        cin >> matricula;
        cout << " \nDigite qual foi sua media final: ";
        cin >> media;
        if(media>=7){
            apro = apro + 1;
        }
        if(media<3){
            repro = repro + 1;
        }   
        if(media<7 && media>=3){
            rec = rec + 1;
        }
        if(media>=9){
            maisQ9 = matricula;
        }
    }while(media>0);

    cout << " \nQuantidade de alunos aprovados: " << apro;
    cout << " \nQuantidade de alunos reprovados: " << repro;
    cout << " \nQuantidade de alunos em recuperacao: " << rec;
    return 0;
}