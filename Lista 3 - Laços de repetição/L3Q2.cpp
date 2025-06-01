/*Crie  um  algoritmo  que  ajude  o  DETRAN  a  saber  o  total  de  recursos  que  foram  arrecadados  com  a 
aplicação  de  multas  de  trânsito.  O  algoritmo  deve  ler  as  seguintes  informações  para  cada  um  dos  N 
motoristas:  
- O número da carteira de motorista (inteiro);  
- Número de multas;  
- O valor de cada uma das multas.  
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista 
que obteve o maior número de multas.*/
#include <iostream>
using namespace std;
int main(){
    int numeroMotorista, multas = 0, maiorNumMultas = 0;
    float valorMulta, divida, total = 0;
    char resposta;
    do{
        cout << " \nDigite o numero da sua carteira de motorista: ";
        cin >> numeroMotorista;
        divida = 0;
        do{
            cout << " \nDigite o valor da multa: ";
            cin >> valorMulta;
            divida = divida + valorMulta;
            cout << " \nDigite se voce ainda tem alguma multa (s) para sim e (n) para nao: ";
            cin >> resposta;
            multas ++;
        }while(resposta=='s');
        cout << "\nO valor da sua divida eh: R$ " << divida;
        total = total + divida;
        if(multas>maiorNumMultas){
            maiorNumMultas = numeroMotorista;
        }
        cout << " \nDigite se ainda tem novos motoristas (s) para sim e (n) para nao: ";
        cin >> resposta;
    }while(resposta == 's');
    cout << " \nO total arrecadado eh: R$ " << total;
    cout << " \nO numero da carteira do motorista com mais multas eh: " << maiorNumMultas;
    return 0;
}