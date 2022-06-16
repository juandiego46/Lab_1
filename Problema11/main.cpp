#include <iostream>

using namespace std;

int buscaCarcater(int cadena[10], int caracter);
int EsPrimo(int n);

int main()
{
    int num = 8;
    cout << "Ingrese numero: "; cin >> num;
    int t_div = 0;
    int resul = 1;
    int incremento = 2; //Divisores que van aumentando.
    int div[10];
    int posicion = 0;
    bool ban = false;

    for(int i = num; i > 1; i--){
        for(int j = 1; j <= i; j++){ //Verificacion si es primo
            if(i % j == 0){
                t_div++;
            }
        }
        ban = false;
        for(int k = 0; k <= 10; k++){
            if(div[k] == i){
                ban = true;
                break;
            }
        }
        if(t_div == 2 & ban == false){
            resul = resul * i;
            t_div = 0;
            div[posicion] = i;
        }
        else{
            int resto = i;
            t_div = 0;
            ban = false;
            for(int k = 0; k <= 10; k++){
                if(div[k] == incremento){
                    ban = true;
                    break;
                }
            }
            if(ban == false){
                for(int j = incremento; resto > 1; j=j){ //Ciclo que calcula la mayor potencia.
                        if(resto % incremento == 0){
                            resto = resto / incremento;
                            div[posicion] = resto;
                            resul = resul * j;
                            posicion++;
                            div[posicion] = incremento;
                            posicion++;
                        }
                        else{
                            div[posicion] = incremento;
                            posicion++;
                            break;
                        }
                }
                incremento++;
                posicion++;
            }
            else{
                incremento++;
                posicion++;
            }
        }
    }


    cout << "El minimo comun multiplo es: " << resul << endl;
    return 0;
}

int buscaCarcater(int cadena[10], int caracter){
    int verificador = 0;
    for(int k = 0; k <= 10; k++){
        if(cadena[k] == caracter){
            verificador = 1;
            break;
        }
    }
    return verificador;
}
int Esprimo(int n){
    int verificador = 0;
    int t_div = 0;

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){ //Verificacion si es primo
            if(i % j == 0){
                t_div++;
            }
        }
        if(t_div == 2){
            t_div = 0;
            verificador = 1;
            return verificador;
        }
    }
    return verificador;
}


