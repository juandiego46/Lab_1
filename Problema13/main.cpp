#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int suma = 0;
    cout << "Ingrese numero: "; cin >> num;

    //Verificacion si es primo o no lo es.
    for(int i = 2; i < num; i++){
        int verificador = 0;
        for(int divisor = 1; divisor <= i; divisor++){
            if(i % divisor == 0){
                verificador++;
            }
        }
        if(verificador == 2){
            suma = suma + i;
        }
    }
    cout << "El resultado de la suma es= " << suma << endl;
    return 0;
}
