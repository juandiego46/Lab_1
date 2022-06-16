#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cout << "Ingrese el numero: "; cin >> num;
    int suma = 0;
    int aux = 0;
    int s_pares = 0; //Suma de los numeros pares.
    for(int i = 1; i < num; i = suma){
        suma = i + aux;
        aux = i;
        if(suma % 2 == 0){
            s_pares = s_pares + suma;
        }
    }
    cout << "El resultado de la suma: " << s_pares << endl;
    return 0;
}
