#include <iostream>
using namespace std;

int main(){
    string nome;
    float num;
    float soma = 0;
    cout << "digite a ou s e um numero" <<endl;
    cin >> nome >> num;
    
    if(nome == "s"){
        cout << "0) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "1) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "2) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "3) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "4) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "5) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "6) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "7) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "8) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "9) " << num << endl;
        num ++;
        soma = soma + num;

        cout << "10) " << num << endl;
    }else{
        if(nome == "a"){
           cout << "0) " << num << endl;
        num --;
        soma = soma + num;
        cout << "1) " << num << endl;
        num --;
        soma = soma + num;
        cout << "2) " << num << endl;
        num --;
        soma = soma + num;
        cout << "3) " << num << endl;
        num --;
        soma = soma + num;
        cout << "4) " << num << endl;
        num --;
        soma = soma + num;
        cout << "5) " << num << endl;
        num --;
        soma = soma + num;
        cout << "6) " << num << endl;
        num --;
        soma = soma + num;
        cout << "7) " << num << endl;
        num --;
        soma = soma + num;
        cout << "8) " << num << endl;
        num --;
        soma = soma + num;
        cout << "9) " << num << endl;
        num --;
        soma = soma + num;
        cout << "10) " << num << endl; 
        }
    }
    cout << "soma = "<< soma <<endl;
}