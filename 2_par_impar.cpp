#include <iostream>
using namespace std;

int main() {
    int A;
    cout << "Digite um número: ";
    cin >> A;

    if (A % 2 == 0) {
        if (A > 100) {
            cout << "É par e maior que 100";
        } else {
            cout << "é par e menor que 100";
        }
    } else {
        if (A > 0) {
            cout << "impar e Positivo";
        } else {
            cout << "impar e Negativo";
        }
    }

    return 0;
}