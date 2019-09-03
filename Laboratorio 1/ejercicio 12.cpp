#include <iostream>

using namespace std;

void numeroInvertido (int a){
    if(a>0){
    int i=a%10;
    cout << i;
    numeroInvertido(a/10);
    }
    return; 
}

int main() {
    
    int n;
    
    cout << "Ingrese numero: " << endl;
    cin >> n; 
    
    numeroInvertido(n);
    
    return 0;
}

