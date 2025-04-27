#include <iostream>
using namespace std;

int main (){
     int numero, soma = 0;

    cout << "digite um numero inteiro maior que zero (até 5 algarismos): ";
    cin >> numero;

    if (numero > 0 && numero <= 99999) {
        if (numero >= 10000) {
            soma += numero / 10000;
            numero = numero % 10000;
            cout<< soma << " " << numero <<endl;
        }
        if(numero >= 1000){
            soma += numero / 1000;
            numero = numero % 1000;
            cout<< soma << " " << numero <<endl;
        }
        if(numero >= 100){
            soma+=numero/100;
            numero = numero%100;
            cout<< soma << " " << numero << endl;
        }
        if(numero >= 10){
            soma+= numero/10;
            numero = numero%10;
            cout<< soma << " " << numero <<endl;
        }
        if(numero >= 1){
            soma+= numero/1;
            numero= numero%1;
            cout<< soma << " " << numero <<endl;
        }
        
        else{
            cout << "numero invalido." <<endl;
        }
        
    }
    cout << "soma total: " << soma ;
}