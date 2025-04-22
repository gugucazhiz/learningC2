#include <iostream>
using namespace std;

int main() {
    int nivel;
    float salario;
    int horas;

    cout << "Digite seu nivel e horas: ";
    cin >> nivel >> horas;

    if (nivel == 1) {
        salario = 12 * horas;
    } else {
        if (nivel == 2) {
            salario = 17 * horas;
        } else {
            if (nivel == 3) {
                salario = horas * 25;
            }
        }
    }

    cout << "Salario: R$" << salario << endl;

    return 0;
}
