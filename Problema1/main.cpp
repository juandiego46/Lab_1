/*
Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante
o ninguna de las 2 e imprima un mensaje según el caso.
*/

#include <iostream>

using namespace std;

int main()
{
    char vocales[] = {'a','e','i','o','u','A','E','I','O','U'};
    char consonantes[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','X','Y','Z'};
    char caracter;
    cout << "Ingrese un caracter: "; cin >> caracter;
    bool ban = false;

    for(int i=0; i<sizeof(vocales); i++){
        if (caracter == vocales[i]){
            cout << "El caracter que ingreso es una vocal. " << vocales[i] << endl;
            ban = true;
            return 0;
        }
    }
    if (ban == false){
        for(int i=0; i<sizeof(consonantes); i++){
            if (caracter == consonantes[i]){
                cout << "El caracter que ingreso es una consonate. " << consonantes[i] << endl;
                ban = true;
                return 0;
            }
        }
    }
    cout << "El caracter que ingreso no es una letra." << endl;

    return 0;
}
