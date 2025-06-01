/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e 
calcule  o  novo  salário.  Se  o  cargo  do  funcionário  não  estiver  na  tabela,  ele  deverá  receber  40%  de 
aumento. Mostre o salário antigo, o novo salário e a diferença. 
CÓDIGO  CARGO       PERCENTUAL  
101     Gerente     10%  
102     Engenheiro  20%  
103     Técnico     30%*/
#include <iostream>
using namespace std;
int main(){
    int codigo;
    float salario, novoSalario, diferenca;
    cout << " Digite seu codigo do seu cargo: ";
    cin >> codigo;
    cout << " \nDigite seu codigo do seu salario: ";
    cin >> salario;
    if(codigo==101){
        novoSalario = salario*1.10;
        diferenca = novoSalario-salario;
        cout << " \nSeu novo salario eh: R$ " << novoSalario << " E a diferenca do salario antigo para o novo eh: R$ " << diferenca; 
    }   if(codigo==102){
            novoSalario = salario*1.20;
            diferenca = novoSalario-salario;
            cout << " \nSeu novo salario eh: R$ " << novoSalario << " E a diferenca do salario antigo para o novo eh: R$ " << diferenca; 
            }   if(codigo==103){
                    novoSalario = salario*1.30;
                    diferenca = novoSalario-salario;
                    cout << " \nSeu novo salario eh: R$ " << novoSalario << " E a diferenca do salario antigo para o novo eh: R$ " << diferenca;
                }   if((codigo!=101) && (codigo!=102) && (codigo!=103)){
                    novoSalario = salario*1.40;
                    diferenca = novoSalario-salario;
                    cout << " \nSeu novo salario eh: R$ " << novoSalario << " E a diferenca do salario antigo para o novo eh: R$ " << diferenca; 
                    }
    return 0;
}