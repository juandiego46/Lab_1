#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cout << "Ingrese numero: "; cin >>num;
    int dig = num % 10;
    int rest = num / 10;
    int suma = 0;
    for(int i = num; i > 0; i = rest){
        int multip = dig;
        for(int j = 1; j < dig; j++){
            multip = dig * multip;
        }
        suma = suma + multip;
        dig = rest % 10;
        rest = rest / 10;
    }
    if(rest == 0){ //Para el ultimo digito.
        int multip = dig;
        for(int j = 1; j < dig; j++){
            multip = dig * multip;
        }
        suma = suma + multip;
    }

    cout << "El resultado de la suma es= " << suma << endl;
    return 0;
}
