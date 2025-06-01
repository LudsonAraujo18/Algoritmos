/*A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, 
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média 
das  três  notas  mencionadas  anteriormente  obedece  aos  pesos:  Trabalho  de  Laboratório:  2;  Avaliação 
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media 
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.*/
#include <iostream>
using namespace std;
int main(){
    float n1, n2, n3, media;
    cout << " Digite suas tres notas (trabalho de laboratorio, avaliacao semestral e exame final): \n";
    cin >> n1 >> n2 >> n3;

    media = ((n1*2) + (n2*3) + (n3*5))/(2+3+5);
    if(media>0 && media<=2.9){
        cout << " \nVoce foi reprovado.";
    }   if(media>=3 && media<=4.9){
            cout << " \nVoce esta em recuperacao.";
        }   if(media>=5){
                cout << " \nVoce foi aprovado.";
        }
    return 0;
}