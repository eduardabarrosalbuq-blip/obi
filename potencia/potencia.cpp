#include <iostream>

using namespace std;

int main(void){
int n, pot, res= 1;

cout << "Qual a base da potencia? " "\n";
cin >> n;

cout << "Qual o expoente da potencia? " "\n";
cin >> pot; 

cout << " " "\n";

int i = 0;
 
while(i< pot){
    res = res * n;

    i = i+1;
}

    return 0;
}