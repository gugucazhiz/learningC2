#include <iostream>
using namespace std;

int main() {
    int Codigo;
    float Valor;

    cout << "Digite o Codigo do seu lanche"<<endl;
    cin >> Codigo;

    if (Codigo == 100) {
        Valor = Valor + 1.10;
        cout << "Voce escolheu o cachorro quente"<<endl;
    } else {
        if (Codigo == 101) {
            Valor = Valor + 1.30;
            cout << "Voce escolheu Bauru"<<endl;
        } else {
            if (Codigo == 102) {
                Valor = Valor + 1.50;
                cout << "Voce escolheu Bauru com ovo"<<endl;
            } else {
                if (Codigo == 103) {
                    Valor = Valor + 4;
                    cout << "Hamburguer completo"<<endl;
                }
            }
        }
    }

    cout << "Digite o Codigo da sua bebida"<<endl;
    cin >> Codigo;

    if (Codigo == 105) {
        Valor = Valor + 3;
        cout << "Refrigerante"<<endl;
    } else {
        if (Codigo == 106) {
            Valor = Valor + 2.50;
            cout << "suco"<<endl;
        } else {
            if (Codigo == 107) {
                Valor = Valor + 2;
                cout << "agua mineral"<<endl;
            }
        }
    }

    cout << "Total a ser pago" << Valor<<endl;
}
