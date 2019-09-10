/*#include <iostream>

using namespace std;

void Hanoi(int n, int pua1, int pua2, int pua3){
    if (n>1){
    Hanoi(n-1, pua1, pua3, pua2);
    cout << "Disco " <<  n  << " pasa de " << pua1 << " a " <<  pua3 << endl;
    Hanoi(n-1, pua2, pua1, pua3);
    }
    if (1==n)
    cout << "Disco 1 pasa de " << pua1 << " a " << pua3 << endl;
}

int main(){
    int barras;
    cout << "Introduzca el numero de discos: ";
    cin >> barras;

    Hanoi(barras, 1, 2, 3);

    return 0;
}*/