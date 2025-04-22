#include <iostream>
using namespace std;

int main() {
    int km,gasolina,economia = 0;
    
    cout << "informe a quilometragem e quantidade de gasolina gasta"<<endl;
    cin >> km >> gasolina;
    economia = km/gasolina;
    if(economia < 8){
        cout << "Venda o Carro, Economia de: " << economia;
    }else{
        if((economia >= 8 ) && (economia <= 12)){
            cout << "Economico, economia de: " << economia;
        }else{
            if(economia > 12){
                cout << "super economico, economia de: " << economia; 
            }
        }
    }
}
