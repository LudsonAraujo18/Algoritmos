/*Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em grãos de trigo da seguinte 
maneira: os grãos de trigo seriam dispostos em um tabuleiro de xadrez, de tal forma que a primeira casa  
do  tabuleiro  tivesse  um  grão,  e  as  casas  seguintes  o  dobro  da  anterior.  Considere  que  o  tabuleiro  de 
xadrez é 8x8 e que o número da casa varia de 1-8 para a primeira linha, de 9-16 para a segunda linha e 
assim sucessivamente. Construa um algoritmo que calcule quantos grãos de trigo a Rainha deverá pagar 
ao monge a partir da leitura do número da casa desejada. */
#include <iostream>
using namespace std;
int main(){
    int cont, trigo = 1, total=0, casa;
    cout << " \t\n_________________________";
    cout << " \t\n| 1| 2| 3| 4| 5| 6| 7| 8|";
    cout << " \t\n|__|__|__|__|__|__|__|__|";
    cout << " \t\n| 9|10|11|12|13|14|15|16|";
    cout << " \t\n|__|__|__|__|__|__|__|__|";
    cout << " \t\n|17|18|19|20|21|22|23|24|";
    cout << " \t\n|__|__|__|__|__|__|__|__|";
    cout << " \t\n|25|26|27|28|29|30|31|32|";
    cout << " \t\n|__|__|__|__|__|__|__|__|";   
    cout << " \t\n|33|34|35|36|37|38|39|40|";
    cout << " \t\n|__|__|__|__|__|__|__|__|";
    cout << " \t\n|41|42|43|44|45|46|47|48|";
    cout << " \t\n|__|__|__|__|__|__|__|__|";
    cout << " \t\n|49|50|51|52|53|54|55|56|";
    cout << " \t\n|____________________|__|";
    cout << " \t\n|57|58|59|60|61|62|63|64|";
    cout << " \t\n|__|__|__|__|__|__|__|__|";
    cout << " \n\tDigite o numero da casa do tabuleiro que deseja: ";
    cin >> casa;
    for(cont=1; cont<=casa; cont ++){
        trigo = trigo*2;
        total = total + trigo;
    }
    cout << " \nA quantidade de graos eh: " << total;

    return 0;
}