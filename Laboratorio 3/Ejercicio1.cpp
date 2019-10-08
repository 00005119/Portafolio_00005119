/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};


class ListaSimple{
	
private:
nodo *pInicio;
	
public:

    ListaSimple(void) {
    pInicio = NULL;
}
void insertarInicioLista(int dato) {
    nodo *nuevo;
    nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void mostrarListaRec(void) {
    mostrarListaRec(pInicio);
}

void mostrarListaRec(nodo *s) {
    if (s != NULL) {
        mostrarListaRec(s->sig);
        cout << s->dato << " ";
    }
}

void pares(void) {
    pares(pInicio);
}

void pares(nodo *s) {
    if (s != NULL) {
        cout << s->dato << " ";
    pares(s->sig);
    }
}

void mostrarListaPar(void) {
    nodo *s = pInicio;

    cout << "Los elementos pares de la lista son:" << endl;
    
    while (s != NULL ) {
        if(s->dato%2 == 0){
        cout << s->dato << " ";
		}
        s = s->sig;        

    }
}

void mostrarListaImpar(void) {
    nodo *s = pInicio;

    cout << "Los elementos Impares de la lista son:" << endl;
    
    while (s != NULL ) {
        if(s->dato%2 != 0){
        cout << s->dato << " ";
		}
        s = s->sig;        

    }
}

void mostrarListaRecD(void) {
    mostrarListaRecD(pInicio);
}

void mostrarListaRecD(nodo *s) {
    if (s != NULL) {
        cout << s->dato << " ";
        mostrarListaRecD(s->sig);
    }
}

};


int main()
{
    ListaSimple miLista;
    char resp;
    int dato, datoRef;
    
    
   srand(time(NULL));
   int i, n, aleatorio, DESDE=1, HASTA=100;
   cout << "Numeros aleatorios entre " << DESDE << " y " << HASTA << endl;
   cout << "Cuantos numeros aleatorios quiere generar? ";
   cin >> n;
   for (i = 1; i <= n; i ++)
   {
             aleatorio = rand()%(HASTA-DESDE+1)+DESDE;
             cout << aleatorio << " ";
             miLista.insertarInicioLista(aleatorio);
   }
   cout << endl;
   
    cout << "\nMostrar lista:" << endl;
    miLista.mostrarListaRec();
    cout<<endl;
    
    cout << "\nPares:" << endl;
    miLista.mostrarListaPar();
    
    cout<<endl;
    cout << "\nImpares:" << endl;
    miLista.mostrarListaImpar();
    
    cout<<endl;
    
    cout << "\nMostrar lista recursivo (sentido Inverso):" << endl;
    miLista.mostrarListaRecD();
    
    cout<<endl;
    
       
   system("pause");
}*/