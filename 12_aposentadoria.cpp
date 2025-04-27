#include <iostream>
using namespace std;

int main() {
    int idade,trabalho = 0;
    
    cout << "digite a idade e os anos de trabalho: "<<endl;
    cin >> idade >> trabalho;
    
    if(idade>= 65){
        cout<< "pode se aposentar"<<endl;
    }else{
        if(trabalho >= 30){
            cout <<  "pode aposentar por tempo trabalhado"<<endl;
        }else{
            if((trabalho >= 25) && (idade >= 60)){
                cout << "pode aposentar por idade/trabalo minima(o)";
            }else{
                cout << "não pode se aposentar ainda";
            }
        }
    }
}