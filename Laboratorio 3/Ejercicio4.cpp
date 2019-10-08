#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class NumPeI{    
private:    
    nodo *pInicio;
    
public:
    NumPeI(void);
    void Sumatoria(int);
};

NumPeI::NumPeI(){
    pInicio = NULL;
}

/*void NumPeI::Sumatoria(int *pInicio){
    int aux = pInicio -> dato;
    
    if(aux % 2 == 0)
        sumatoria(pInicio -> sig);
    
}*/


int main() {
    
    NumPeI miLista;
    char resp;
    int dato;
    
    cout << "Desea meter un dato (s/n)?";
    cin>> resp;
    while(resp == 's'){
        cout << "Digite el dato: ";
        cin >> dato;
        cout << "Desea meter un dato (s/n)?";
        cin>> resp;
    }    
   
    cout << "La suma de Pares e Impares es: ";
    //miLista.Sumatoria();
    
    return 0;
}