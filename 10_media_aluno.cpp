#include <iostream>
using namespace std;

int main() {
    float trabalho, avaliacao, exame, media;

    cout << "digite a nota do trabalho de laboratorio (0 a 10): ";
    cin >> trabalho;

    cout << "digite a nota da avaliacao semestral (0 a 10): ";
    cin >> avaliacao;

    cout << "digite a nota do exame final (0 a 10): ";
    cin >> exame;

    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / 10;

    cout << "media final: " << media << endl;


    if (media >= 0 && media <= 2.9) {
        cout << "reprovado" << endl;
    } else if (media >= 3 && media <= 4.9) {
        cout << "recuperacao" << endl;
    } else {
        cout << "aprovado" << endl;
    }

    return 0;
}