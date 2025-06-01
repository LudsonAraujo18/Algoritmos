/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.*/

#include <iostream>
using namespace std;
int main(){
    float C, F;
    cout << " Digite alguma temperatura em graus Celsius que deseja ser convertida em Fahrenheit: ";
    cin >> C;
    
    F = ((9*C+160)/5);
    
    cout << " \nA temperatura em Fahrenheit eh: " << F << " graus";
    
    return 0;
}