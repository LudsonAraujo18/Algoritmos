/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino). 
Utilize as seguintes fórmulas para cálculo do peso ideal:   
• Masculino = (72,7 x altura) - 58   
• Feminino = (62,1 x altura) - 44,7*/
#include <iostream>
using namespace std;
int main(){
    float altura, pesoIdeal;
    char genero;
    cout << " Digite sua altura: ";
    cin >> altura;
    cout << " \nDigite seu genero (m) para masculino e (f) para feminino: ";
    cin >> genero;
    if(genero=='m'){
        pesoIdeal = (72.7*altura)- 58;
        cout << " \nO peso ideal eh: " << pesoIdeal << " Kg";
    }   if(genero=='f'){
            pesoIdeal = (62.1*altura) - 44.7;
            cout << " \nO peso ideal eh: " << pesoIdeal << " Kg";
        }
    return 0;
}