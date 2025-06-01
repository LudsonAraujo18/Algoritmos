/*Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês 
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está 
em  um  ano  que  não  é  bissexto,  porém  considere  meses  de  28,  30  e  31.  O  resultado  deve  ser  como 
mostrado abaixo. Ex: janeiro, começando na 5a feira: */
#include <iostream>
using namespace std;
int main(){
    int mes, cont;
    char resposta;
    for(cont = 1; cont<=12; cont ++){
        cout << " \nDigite o numero do mes (exemplo: janeiro = 1, fevereiro = 2... dezembro = 12): ";
        cin >> mes;
        switch(mes){
            case 1: cout << " \n             JANEIRO               ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n                 1    2    3    4  ";
                    cout << " \n  5    6    7    8    9   10   11  ";
                    cout << " \n 12   13   14   15   16   17   18  ";
                    cout << " \n 19   20   21   22   23   24   25  ";
                    cout << " \n 26   27   28   29   30   31       ";
                break;
            case 2: cout << " \n            FEVEREIRO              ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n                                1  ";
                    cout << " \n  2    3    4    5    6    7    8  ";
                    cout << " \n  9   10   11   12   13   14   15  ";
                    cout << " \n 16   17   18   19   20   21   22  ";
                    cout << " \n 23   24   25   26   27   28       ";
                break;
            case 3: cout << " \n              MARCO                ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n                                1  ";
                    cout << " \n  2    3    4    5    6    7    8  ";
                    cout << " \n  9   10   11   12   13   14   15  ";
                    cout << " \n 16   17   18   19   20   21   22  ";
                    cout << " \n 23   24   25   26   27   28   29  ";
                    cout << " \n 30   31                           ";
                break;
            case 4: cout << " \n              ABRIL                ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n            1    2    3    4    5  ";
                    cout << " \n  6    7    8    9   10   11   12  ";
                    cout << " \n 13   14   15   16   17   18   19  ";
                    cout << " \n 20   21   22   23   24   25   26  ";
                    cout << " \n 27   28   29   30                 ";
                break;
            case 5: cout << " \n              MAIO                 ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n                      1    2    3  ";
                    cout << " \n  4    5    6    7    8    9   10  ";
                    cout << " \n 11   12   13   14   15   16   17  ";
                    cout << " \n 18   19   20   21   22   23   24  ";
                    cout << " \n 25   26   27   28   29   30   31  ";
                break;
            case 6: cout << " \n              JUNHO                ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n  1    2    3    4    5    6    7  ";
                    cout << " \n  8    9   10   11   12   13   14  ";
                    cout << " \n 15   16   17   18   19   20   21  ";
                    cout << " \n 22   23   24   25   26   27   28  ";
                    cout << " \n 29   30                           ";
                break;
            case 7: cout << " \n              JULHO                ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n            1    2    3    4    5  ";
                    cout << " \n  6    7    8    9   10   11   12  ";
                    cout << " \n 13   14   15   16   17   18   19  ";
                    cout << " \n 20   21   22   23   24   25   26  ";
                    cout << " \n 27   28   29   30   31            ";
                break;
            case 8: cout << " \n              AGOSTO               ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n                           1    2  ";
                    cout << " \n  3    4    5    6    7    8    9  ";
                    cout << " \n 10   11   12   13   14   15   16  ";
                    cout << " \n 17   18   19   20   21   22   23  ";
                    cout << " \n 24   25   26   27   28   29   30  ";
                    cout << " \n 31                                ";
                break;
            case 9: cout << " \n             SETEMBRO              ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n       1    2    3    4    5    6  ";
                    cout << " \n  7    8    9   10   11   12   13  ";
                    cout << " \n 14   15   16   17   18   19   20  ";
                    cout << " \n 21   22   23   24   25   26   27  ";
                    cout << " \n 28   29   30                      ";
                break;
            case 10: cout << " \n            NOVEMBRO              "; 
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n                 1    2    3    4  ";
                    cout << " \n  5    6    7    8    9   10   11  ";
                    cout << " \n 12   13   14   15   16   17   18  ";
                    cout << " \n 19   20   21   22   23   24   25  ";
                    cout << " \n 26   27   28   29   30   31       ";
                break;
            case 11: cout << " \n            OUTUBRO               ";
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n                                1  ";
                    cout << " \n  2    3    4    5    6    7    8  ";
                    cout << " \n  9   10   11   12   13   14   15  ";
                    cout << " \n 16   17   18   19   20   21   22  ";
                    cout << " \n 23   24   25   26   27   28   29  ";
                    cout << " \n 30                                ";
                break;
            case 12: cout << " \n           DEZEMBRO               "; 
                    cout << " \nDom  Seg  Ter  Qua  Qui  Sex  Sab  ";
                    cout << " \n       1    2    3    4    5    6  ";
                    cout << " \n  7    8    9   10   11   12   13  ";
                    cout << " \n 14   15   16   17   18   19   20  ";
                    cout << " \n 21   22   23   24   25   26   27  ";
                    cout << " \n 28   29   30   31                 ";
                break;
            default: cout << " \nNumero invalido.";
        }
        cout << " \nAinda deseja ver mais algum mes (s) para sim e (n) para nao? ";
        cin >> resposta;
        if(resposta=='n'){
            break;
        }
    }
    return 0;
}