#include <iostream>

using namespace std;
int main(void){
int idade, nota;

cout << "Qual sua idade? ";
cin >> idade;

cout << "Qual a sua nota? ";
cin >> nota;


if(!(idade < 18)){
    cout << "Você não pode participar da modalidade Pj/P1!" "\n";

    return 0;
}

if(nota < 0 || nota > 100){
cout << "Nota fora do padraõ!!" "\n";

return 0;
}

if(nota >= 80){
    cout << "Parabéns!!!! Você ganhou uma medalha" "\n";

    return 0;
}

cout << "Tente novamente no ano seguinte, você não ganhou medalha" "\n";

    return 0;
}
