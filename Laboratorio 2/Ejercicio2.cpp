#include <iostream>

using namespace std;

float raiz(int n, float r){

    float resta;
    float r2;
    resta = r-r2;
    if(resta<0.0001){
        return r2;
    }
    
    r=(((n/4)+4)/(2));

    return raiz(n, r2);
}

int main(){
    
    int n;
    int r;
    int valor;
    
    cout << "Ingrese un numero: ";
    cin >> n;
    
    r=(((n/4)+4)/(2));
    
    valor=raiz(n, r);
    
    cout << "La raiz del numero es: " << valor << endl;
    
    return 0;
}