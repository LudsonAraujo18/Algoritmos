/*O cardápio de uma lanchonete é o seguinte:  
Sanduíche   
Código  Descrição  Preço Unitário  
100  Cachorro quente  1,10  
101  Baurú simples  1,30  
102  Baurú com ovo  1,50  
103  Hamburger  1,10  
104  Cheesburger  1,30  
Bebida   
Código  Descrição  Preço Unitário  
105  Refrigerante  1,00  
106  Suco  2,00  
107  Nescau  1,50  

Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche. */
#include <iostream>
using namespace std;
int main(){
    int codigoSandu, codigoBebida, quantiBebida, quantiSandu;
    float valorPago, sanduiche, bebida;
    cout << "\n\tCARDAPIO";
	cout << "\n\n\tSanduiche"; 	
	cout << "\n\tCodigo\tDescricao\tPreco Unitario ";
	cout << "\n\t100\tCachorro quente\t1,10 ";
	cout << "\n\t101\tBauru simples\t1,30 ";
	cout << "\n\t102\tBauru com ovo\t1,50 ";
	cout << "\n\t103\tHamburger\t1,10 ";
	cout << "\n\t104\tCheesburger\t1,30 ";
	cout << "\n\n\tBebida";
	cout << "\n\tCodigo\tDescricao\tPreco Unitario ";
	cout << "\n\t105\tRefrigerante\t1,00 ";
	cout << "\n\t106\tSuco\t\t2,00 ";
	cout << "\n\t107\tNescau\t\t1,50 ";
    cout << " \nDigite o codigo do sanduiche que deseja: ";
    cin >> codigoSandu;
    cout << " \nDigite a quantidade de sanduiche que deseja: ";
    cin >> quantiSandu;
    cout << " Digite o codigo da bebida que deseja: ";
    cin >> codigoBebida;
    cout << " \nDigite a quantidade de bebida que deseja: ";
    cin >> quantiBebida;

    switch(codigoSandu){
        case 100:
        case 103: sanduiche = quantiSandu*1.10;
            break;
        case 101:
        case 104: sanduiche = quantiSandu*1.30;
            break;
        case 102: sanduiche = quantiSandu*1.50;
            break;
        default: cout << " \nCodigo invalido. ";
    }
    switch(codigoBebida){
        case 105: bebida = quantiBebida*1;
            break;
        case 106: bebida = quantiBebida*2;
            break;
        case 107: bebida = quantiBebida*1.50;
            break;
        default: cout << " \nCodigo invalido. ";
    }
    valorPago = sanduiche + bebida;
    cout << " \nO valor a ser pago eh: R$ " << valorPago;
    return 0;
}