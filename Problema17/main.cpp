#include <iostream>

using namespace std;

int main()
{
    int num = 0; // Numero de divisores que el usuario desea.
    int div = 0; // Numero de divisores de cada numero triangular.
    int triangular = 0;  // Donde se van a guardar la secuencia de numeros triangulares.
    int ban = false;
    int i = 1;   // Iterador
    cout << "Ingrese numero de divisores: "; cin >> num;
    while(ban == false){
        div = 0;
        triangular = i*(i+1)/2;
        for(int j = 1; j <= triangular;j++){
            if(triangular % j == 0){
                div++;
            }
        }
        if(div >= num + 1){
            cout << "El numero es: " << triangular << " que tiene un total de " << div << " divisores." << endl;
            ban = true;
        }
        else{
           i++;
        }
    }


    return 0;
}
