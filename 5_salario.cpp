#include <iostream>
using namespace std;

int main() {
    int codigo;
    float salario;

    cout << "Digite seu salario e seu codigo: ";
    cin >> salario >> codigo;

    if (codigo == 101) {
        salario = salario * 1.10;
        cout << "Aumento de 10%!" << endl;
    } else {
        if (codigo == 102) {
            salario = salario * 1.20;
            cout << "Salario aumentado de 20%!" << endl;
        } else {
            if (codigo == 103) {
                salario = salario * 1.30;
                cout << "Aumento de 30%!" << endl;
            } else {
                salario = salario * 1.40;
                cout << "Aumento de 40%!" << endl;
            }
        }
    }

    cout << "Novo salario: " << salario << endl;

    return 0;
}
