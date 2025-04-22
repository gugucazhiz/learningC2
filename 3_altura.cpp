#include <iostream>
#include <string>
using namespace std;

int main() {
    string genero;
    float altura;
    float peso;

    cout << "Digite sua altura e seu genero (m/f): ";
    cin >> altura >> genero;

    if (genero == "m") {
        peso = (72.7 * altura) - 58;
        cout << "Seu peso ideal é: " << peso;
    } else {
        peso = (62.1 * altura) - 44.7;
        cout << "Seu peso ideal é: " << peso;
    }

    return 0;
}
