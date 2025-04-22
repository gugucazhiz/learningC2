#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Digite os lados 1, 2 e 3: ";
    cin >> x >> y >> z;

    if (x + y > z) {
        if (x + z > y) {
            if (y + z > x) {
                cout << "É um triângulo";
            } else {
                cout << "Não é";
            }
        } else {
            cout << "Não é";
        }
    } else {
        cout << "Não é";
    }

    return 0;
}