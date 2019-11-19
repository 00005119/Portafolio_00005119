#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

struct arbol{
    int dato;
    arbol *izq;
    arbol *der;
};

nodo *creandoNodo(int val){
    nodo *nuevo = new nodo();
    nuevo->dato = val;
    nuevo->sig = NULL;
    return nuevo;
}

void mostrar(nodo *pInicio){
    if(pInicio!=NULL){
        cout << pInicio->dato << ", ";
        mostrar(pInicio->sig);
    }
    else{
        cout<<"NULL";
    }
}

void eliminar(nodo *&pInicio){
    nodo *s = pInicio;
    while(pInicio != NULL){
        s = pInicio;
        pInicio = pInicio->sig;
        delete(s);
    }
}

void insertar(nodo *&pInicio, nodo *&nuevo){
    if(pInicio==NULL){
        pInicio=nuevo;
    }
    else{
        insertar(pInicio->sig, nuevo);
    }
}

void mostrarPreorden(arbol *raiz){
    if(raiz != NULL){
        cout << raiz->dato << ", ";
        mostrarPreorden(raiz->izq);
        mostrarPreorden(raiz->der);
    }
}

arbol *creandoNodoArbol(int val){
    arbol *nuevo = new arbol();
    nuevo->dato = val;
    nuevo->izq = nuevo->der = NULL;
    return nuevo;
}

void llenarArbol(arbol *&raiz, arbol *&nuevo){
    if(raiz == NULL){
        raiz = nuevo;
    }
    else if (nuevo->dato < raiz->dato){
        if(raiz->izq != NULL){
            llenarArbol(raiz->izq, nuevo);
        }
        else{
            raiz->izq = nuevo;
        }
    }
    else if (nuevo->dato > raiz->dato){
        if(raiz->der != NULL){
            llenarArbol(raiz->der, nuevo);
        }
        else{
            raiz->der = nuevo;
        }
    }
}

void llenandoArbolLista(nodo *&pInicio, arbol *&raiz){
    if(pInicio != NULL){
        arbol *nuevo = creandoNodoArbol(pInicio->dato);
        llenarArbol(raiz, nuevo);
        llenandoArbolLista(pInicio->sig, raiz);

    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    nodo *pInicio = NULL;
    nodo *aux = NULL;

    arbol *raiz = NULL;

    for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i) {
        aux = creandoNodo(arr[i]);
        insertar(pInicio, aux);
    }
    cout << "Nodo agregado: ";
    mostrar(pInicio);

    llenandoArbolLista(pInicio, raiz);
    cout << endl << "Arbol con lista: ";
    mostrarPreorden(raiz);

    cout << endl << "Arbol con Lista: ";
    mostrarPreorden(raiz);

    cout << endl << "Nodo insertado: ";
    eliminar(pInicio);
    mostrar(pInicio);

    return 0;
}