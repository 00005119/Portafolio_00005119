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

nodo *creandoNodoEnLista(int valor){
    nodo *nuevo = new nodo();
    nuevo->dato = valor;
    nuevo->sig = NULL;
    return nuevo;
}

void mostrar(nodo *pInicio){
    if(pInicio!=NULL){
        cout << pInicio->dato << " ";
        mostrar(pInicio->sig);
    }
    else{
        cout << " ";
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

void MostrarPreorden(arbol *raiz){
    if(raiz != NULL){
        cout << raiz->dato << " ";
        MostrarPreorden(raiz->izq);
        MostrarPreorden(raiz->der);
    }
}

arbol *creandoNodoEnArbol(int valor){
    arbol *nuevo = new arbol();
    nuevo->dato = valor;
    nuevo->izq = nuevo->der = NULL;
    return nuevo;
}

void llenandoArbol(arbol *&raiz, arbol *&nuevo){
    if(raiz == NULL){
        raiz = nuevo;
    }
    else if (nuevo->dato < raiz->dato){
        if(raiz->izq != NULL){
            llenandoArbol(raiz->izq, nuevo);
        }
        else{
            raiz->izq = nuevo;
        }
    }
    else if (nuevo->dato > raiz->dato){
        if(raiz->der != NULL){
            llenandoArbol(raiz->der, nuevo);
        }
        else{
            raiz->der = nuevo;
        }
    }
}

void llenandoArbolEnLista(nodo *pInicio, arbol *&raiz){
    if(pInicio != NULL){
        arbol *nuevo = creandoNodoEnArbol(pInicio->dato);
        llenandoArbol(raiz, nuevo);
        llenandoArbolEnLista(pInicio->sig, raiz);
    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    nodo *pInicio = NULL;
    nodo *aux = NULL;

    arbol *raiz = NULL;

    for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i) {
        aux = creandoNodoEnLista(arr[i]);
        insertar(pInicio, aux);
    }
    cout << "Nodo agregado: ";
    mostrar(pInicio);

    llenandoArbolEnLista(pInicio, raiz);
    cout << endl << "Arbol con la lista: ";
    MostrarPreorden(raiz);

    return 0;
}