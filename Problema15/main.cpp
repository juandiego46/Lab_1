#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int suma = 0;   // Suma de la secuencia.
    int esp = 1;    // Espacios de del patron.
    cout << "Ingrese numero impar mayor a 1 (uno): "; cin >> num;
    if(num <= 3){
        for(int i = 1; i <= 9; i++){
            if(i % 2 != 0){
                suma = suma + i;
            }
        }
    }
    else{
        esp = 1; // Numero de espacios que cambia cada 4 iteraciones.
        int aux = 0;
        int cont = 0; //Contador los espacios, que son siempre 4.
        for(int i = 1; cont <= 4; i++){
            if(i % 2 != 0){
                suma = suma + i;
                cont++;
            }
        }
        esp = 3;
        cont = 1;
        for(int i = 9; i <= (num*num); i++){
            if(cont <= 4){
                if(aux == (esp+1)){
                    suma = suma + i;
                    cont++;
                    aux = 1;
                }
                else{
                    aux++;
                }
            }
            else{
                cont = 1;
                esp = esp + 2;
                aux++;
            }
        }
    }
    cout << "La suma es de: " << suma << endl;

    return 0;
}
