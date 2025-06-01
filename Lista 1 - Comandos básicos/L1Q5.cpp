/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos.*/
#include <iostream>
using namespace std;
int main(){
    int segundos, horas, min, seg;
    cout << " Digite quantos segundos durou o evento: ";
    cin >> segundos;
    
    horas = segundos/3600;
    min = ((segundos%3600)/60);
    seg = ((segundos%3600)%60);

    cout << " \nO tempo foi: " << horas << " h| " << min << " m| " << seg << "s";    
    
    return 0;
}