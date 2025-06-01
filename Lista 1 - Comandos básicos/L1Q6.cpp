/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de
fábrica de um carro e escreva o custo ao consumidor.*/

#include <iostream>
using namespace std;
int main(){
    float custoFabrica, distribuidor = 0.28, impostos = 0.45, custoConsumidor;
    cout << " Digite o custo de fabrica do veiculo: ";
    cin >> custoFabrica;
    
    custoConsumidor = custoFabrica + ((custoFabrica*distribuidor) + (custoFabrica*impostos));
    
    cout << " \nO custo total para o consumidor foi: R$ " << custoConsumidor; 
    
    return 0;
}