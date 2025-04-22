#include <iostream>
using namespace std;

int main(){
    int numero1,numero2,numero3;
    string ordem;
    cout << "digite os numeros e a ordem" <<endl;
    cin >> numero1>>numero2>>numero3>>ordem;
    
    if(ordem == "c"){
        if ((numero1 >= numero2) && (numero1 >= numero3)){
            if (numero2 >= numero3){
                cout << numero1 << " " << numero2 << " " << numero3;
            }else{
                cout << numero1 << " " << numero3<< " " << numero2;
            }
        }else{
            if ((numero2 >= numero1)&& (numero2 >= numero3)){
                if (numero1 >= numero3){
                    cout << numero2 << " " << numero1 << " " << numero3;
                    }else{
                        cout << numero2 << " " << numero3<< " " << numero1;
                    }
            }else{
                if ((numero3 >= numero1)&& (numero3 >= numero2)){
                    if (numero2 >= numero1){
                        cout << numero3 << " " << numero2 << " " << numero1;
                        }else{
                            cout << numero3 << " " << numero1<< " " << numero2;
                        }
                        
            }
        }
        }
    }else{
        if(ordem == "d"){
            if ((numero1 <= numero2) && (numero1 <= numero3)){
                if (numero2 < numero3){
                    cout << numero3 << " " << numero2 << " " << numero1;
                }else{
                    cout << numero2 << " " << numero3<< " " << numero1;
                }
            }else{
                if ((numero2 <= numero1)&& (numero2 <= numero3)){
                    if (numero1 <= numero3){
                        cout << numero3 << " " << numero1 << " " << numero2;
                        }else{
                            cout << numero1 << " " << numero3<< " " << numero2;
                        }
                }else{
                    if ((numero3 <= numero1)&& (numero3 <= numero2)){
                        if (numero2 <= numero1){
                            cout << numero1 << " " << numero2 << " " << numero3;
                            }else{
                                cout << numero2 << " " << numero1<< " " << numero3;
                            }
                            
                }
        }
        }
        }
    }
}
