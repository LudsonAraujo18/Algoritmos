/*Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva 
uma  tabela  de  resultados  (formatada  com  linhas  verticais  e  horizontais).  A  tabela  deverá  conter  cada 
valor  lido  em  uma  coluna,  seu  quadrado  (na  segunda  linha)  e  seu  cubo  (na  terceira  linha).  Finalizar  a 
entrada  de  dados  quando  os  4  valores  digitados  forem  iguais  a  zero.  Se  for  digitado  algum  número 
negativo, solicitar que o usuário digite novamente até que o número seja positivo.*/
#include <iostream>
using namespace std;
int main(){
    float v1, v2, v3, v4, q1, q2, q3, q4, c1, c2, c3, c4;
    do{
        do{
            cout << " \nDigite o valor 1: ";
            cin >> v1;
            if(v1<0){
                cout << " \nDigite o numero novamente.";
            }
        }while(v1<0);
        do{
            cout << " \nDigite o valor 2: ";
            cin >> v2;
            if(v2<0){
                cout << " \nDigite o numero novamente.";
            }
        }while(v2<0);
        do{
            cout << " \nDigite o valor 3: ";
            cin >> v3;
            if(v3<0){
                cout << " \nDigite o numero novamente.";
            }
        }while(v3<0);
        do{
            cout << " \nDigite o valor 4: ";
            cin >> v4;
            if(v4<0){
                cout << " \nDigite o numero novamente.";
            }
        }while(v4<0);
        q1 = v1*v1;
        c1 = v1*v1*v1;
        q2 = v2*v2;
        c2 = v2*v2*v2;
        q3 = v3*v3;
        c3 = v3*v3*v3;
        q4 = v4*v4;
        c4 = v4*v4*v4;

        cout << " \n________________________________";
        cout << " \n| " << v1 << " | " << q1 << " | " << c1 << " | ";
        cout << " \n________________________________";
        cout << " \n| " << v2 << " | " << q2 << " | " << c2 << " | ";
        cout << " \n________________________________";
        cout << " \n| " << v3 << " | " << q3 << " | " << c3 << " | ";
        cout << " \n________________________________";
        cout << " \n| " << v4 << " | " << q4 << " | " << c4 << " | ";
        cout << " \n________________________________";
    }while(v1!=0 && v2!=0 && v3!=0 && v4!=0);

    return 0;
}