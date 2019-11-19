#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class Lista{
private:
    nodo *pInicio;

public:
    Lista(void);
    void insertarInicio(int);
    void mostrarLista(void);
    void mostrarDirecto(void);
    void mostrarDirecto(nodo *);
};

Lista::Lista(void) {
    pInicio = NULL;
}

void Lista::insertarInicio(int dato) {
    nodo *nuevo;

    nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void Lista::mostrarLista(void) {
    nodo *s = pInicio;

    cout << "Los elementos de la lista son:" << endl;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
}

void Lista::mostrarDirecto(void) {
    mostrarDirecto(pInicio);
}

void Lista::mostrarDirecto(nodo *s) {
    int acum = 0;
    if (s != NULL ){
        cout << s->dato << " ";
        acum += (s->dato);
        mostrarDirecto(s->sig);
    }
    cout << endl << "total: " << acum << endl;
}

int main(void)
{
    Lista miLista;
    char resp;
    int dato, datoRef, datoBuscar;

    cout << "Desea meter un dato (s/n)?";
    cin>> resp;
    while(resp == 's'){
        cout << "Digite el dato: ";
        cin >> dato;
        miLista.insertarInicio(dato); //insertarInicio(dato);
        cout << "Desea meter un dato (s/n)?";
        cin>> resp;
    }

    cout << "\nMostrar lista: " << endl;
    miLista.mostrarLista();
    cout<<endl;


    cout<< "Los elementos pares de la lista son: "<< endl;
    miLista.mostrarDirecto();


    cout<<endl;

    return 0;
}