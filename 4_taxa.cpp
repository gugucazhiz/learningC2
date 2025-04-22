#include <iostream>
using namespace std;

int main() {
    float taxa;
    float valor;
    int ano;

    cout << "Digite o ano de fabricacao e o valor do seu carro: ";
    cin >> ano >> valor;

    if (ano < 1990) {
        taxa = valor - (valor * 0.99); // ou 0.01
        cout << "Você deve pagar: " << taxa; 
    } else {
        taxa = valor - (valor * 0.985); // ou 0.015
        cout << "Você deve pagar: " << taxa;
    }

    return 0;
}
