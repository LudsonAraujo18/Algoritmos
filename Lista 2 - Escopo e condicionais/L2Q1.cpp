/*Dados  três  valores  X,  Y  e  Z,  verifique  e  escreva  se  eles  podem  ser  os  comprimentos  dos  lados  de  um 
triângulo e, se forem, verificar e escrever se é  um triângulo equilátero, isósceles ou escalenos. Se eles 
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:   
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;   
• Equiláteros: tem os comprimentos dos três lados iguais;   
• Isósceles: tem os comprimentos de dois lados iguais;  
• Escaleno: tem os comprimentos dos três lados diferentes.*/
#include <iostream>
using namespace std;
int main(){
    float X, Y, Z;
    cout << " Digite os valores dos lados X, Y e Z do triangulo: \n";
    cin >> X >> Y >> Z;
    
    if((X+Y>Z) || (Y+Z>X) || (X+Z>Y)){
        if((X==Y)&&(Y==Z)){
            cout << " Esse triangulo eh Equilateros.";
        }   if(((X!=Y)&&(X==Z))||((Z!=X)&&(Z==Y))||((Y!=Z)&&(Y==X))){
                cout << " Esse triangulo eh Isosceles.";
            } if((X!=Y)&&(Z!=X)&&(Y!=Z)){
                cout << " Esse triangulo eh Escaleno.";
                }
    }
    return 0;
}