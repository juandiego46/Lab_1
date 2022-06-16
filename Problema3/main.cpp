/*
Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir "posiblemente año bisiesto".
*/

#include <iostream>

using namespace std;

int main()
{
    int mes = 0;
    int dia = 0;
    cout << "Ingrese el numero del mes: "; cin >> mes;
    if(mes>12){
        cout << mes << " Es un mes invalido." << endl;
        return 0;
    }
    cout << "Ingrese el numero del dia: "; cin >> dia;
    if(dia>31){
        cout << dia << " Es un dia invalido." << endl;
        return 0;
    }

    else if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        if(dia<=31){
            cout << dia << "/" << mes << " Es una fecha valida." << endl;
        }
        else{
            cout << dia << "/" << mes << " Es una fecha invalida." << endl;
        }
        return 0;
    }

    else if(mes==4 || mes==6 || mes==9 || mes==11){
        if(dia<=30){
            cout << mes << "/" << dia << " Es una fecha valida." << endl;
        }
        else{
            cout << dia << "/" << mes << " Es una fecha invalida." << endl;
        }
        return 0;
    }
    else if(mes==2){
        if(dia<=28){
            cout << mes << "/" << dia << " Es una fecha valida." << endl;
        }
        else if(dia==29){
            cout << mes << "/" << dia << " Es una fecha valida en bisiesto." << endl;
        }
        else{
            cout << dia << "/" << mes << " Es una fecha invalida." << endl;
        }
        return 0;
    }
    return 0;
}
