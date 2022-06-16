#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cout << "Ingrese un numero impar: "; cin>>num;
    int n_esp = num - 1;
    int n_carac = 1;

    //PARTE SUPERIOR
    while(n_carac<=num){
        //Espacios Derecha
        for(int i=0; i<(n_esp/2); i++){
            cout << ' ';
        }
        //Caracter
        for(int i=0; i<n_carac; i++){
            cout << '*';
        }
        //Espacios Derecha
        for(int i=0; i<(n_esp/2); i++){
            cout << ' ';
        }
        n_carac = n_carac + 2;
        n_esp = n_esp - 2;
        cout << endl;
    }
    //PARTE INFERIOR
    n_esp = 2;
    n_carac = num - 2;
    while(n_carac >= 1){
        //Espacios Derecha
        for(int i=0; i < (n_esp/2); i++){
            cout << ' ';
        }
        //Caracter
        for(int i=0; i < n_carac; i++){
            cout << '*';
        }
        //Espacios Derecha
        for(int i=0; i<(n_esp/2); i++){
            cout << ' ';
        }
        n_carac = n_carac - 2;
        n_esp = n_esp + 2;
        cout << endl;
    }


    return 0;
}
