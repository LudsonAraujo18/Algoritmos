/*Leia três notas e três pesos, um para cada nota, calcule e escreva a média aritmética e a média 
ponderada das três notas e, nos dois casos, quanto falta para o aluno ser aprovado por média 
(considere a média para aprovação igual a 6,0).*/
#include <iostream>
using namespace std;
int main(){
    float n1, n2, n3, p1, p2, p3, mediaAritmetica, mediaPonderada, aux;
    cout << " Digite a nota 1: ";
    cin >> n1;
    cout << " \nDigite a nota 2: ";
    cin >> n2;
    cout << " \nDigite a nota 3: ";
    cin >> n3;
    cout << " \nDigite o peso 1: ";
    cin >> p1;
    cout << " \nDigite o peso 2: ";
    cin >> p2;
    cout << " \nDigite o peso 3: ";
    cin >> p3;

    mediaAritmetica = (n1 + n2 + n3)/3;

    cout << " \nMedia aritmetica: " << mediaAritmetica;
    if(mediaAritmetica<6){
        aux = 6-mediaAritmetica;
        cout << " \nPara o aluno ser aprovado na media falta: " << aux;
    } else{
        cout << " \nO aluno foi aprovado acima da media";
    }

    mediaPonderada = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

    cout << " \nMedia ponderada: " << mediaPonderada;
    if(mediaPonderada<6){
        aux = 6-mediaPonderada;
        cout << " \nPara o aluno ser aprovado na media falta: " << aux;
    } else{
        cout << " \nO aluno foi aprovado acima da media";
    }
    
    return 0;
}