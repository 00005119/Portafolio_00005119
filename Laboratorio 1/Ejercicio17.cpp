#include  <iostream>

using namespace std;

int main() {
    int n;
    float prom = 0.0;
    float suma = 0;
    int a[10];
    cout << "Ingrese solamente 10 numeros (presionar f para salir): " << endl;
    while (cin >> n) {
        suma = suma + n;
        prom = suma / 10;
    }
    cout << "La suma de numeros es: " << suma << endl;
    cout << "El promedio de numeros es: " << prom << endl;
    return 0;
}