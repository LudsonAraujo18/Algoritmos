/*Elabore  um  algoritmo  que  implemente  uma  calculadora  real:  o  usuário  digita  um  número,  depois  a 
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite 
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação.*/
#include <iostream>
using namespace std;
int main(){
    float resultado =0, num1, num2, cont;
    char operacao1;
    cout << " \tCalculadora";
    cout << " \nDigite ( ( + ) para somar, ( - ) para subtrair, ( * ) para multiplicar e ( / ) para dividir. \n";
    cin >> num1;
    cin >> operacao1;
    cin >> num2;
    do{
        for(cont = 1; cont==1; cont++){
            switch(operacao1){
                case '+': resultado = num1 + num2;
                    break;
                case '-': resultado = num1 - num2;
                    break;
                case '*': resultado = num1 * num2;
                    break;
                case '/': resultado = num1 / num2;
                    break;
                case '=': break;
                default:;
            }
            cin >> operacao1;
        }
        if(operacao1!='='){
            cin >> num1;
            switch(operacao1){
                case '+': resultado = resultado + num1;
                    break;
                case '-': resultado = resultado - num1;
                    break;
                case '*': resultado = resultado * num1;
                    break;
                case '/': resultado = resultado / num1;
                    break;
                case '=': break;
                default:;
            }
            cin >> operacao1;
            
            if(operacao1!='='){
                cin >> num2;
                switch(operacao1){
                    case '+': resultado = resultado + num2;
                        break;
                    case '-': resultado = resultado - num2;
                        break;
                    case '*': resultado = resultado * num2;
                        break;
                    case '/': resultado = resultado / num2;
                        break;
                    case '=': break;
                    default:;
                }
                cin >> operacao1;
            }
        }
    }while(operacao1=='+' || operacao1=='-' || operacao1=='*' || operacao1== '/');
    cout << " \nO resultado eh: " << resultado;
    return 0;
}