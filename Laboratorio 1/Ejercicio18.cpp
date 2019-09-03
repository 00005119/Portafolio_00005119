#include <iostream>

using namespace std;

int main(){
    int dobleArreglo[5][5];

    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            dobleArreglo[x][y] = 0;
        }
    }
    cout << "Ingresar datos para crear diagonal" << endl;
    for (int x = 0; x < 5; x++){
        for (int y = x; y < 5; y++){
            cout << "Ingrese en posicion: " << y << ", " << x << endl;
            cin >> dobleArreglo[x][y];
        }
    }
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            cout << dobleArreglo[x][y] << "\t";
        }
        cout << endl;
    }
    return 0;
}