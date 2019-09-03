#include <iostream>

using namespace std;

struct partesComplejo {
    int parteReal = 0;
    int parteImaginaria = 0;
    char signoParteImaginaria;
};

partesComplejo suma(partesComplejo a, partesComplejo b) {
    partesComplejo residuo;
    residuo.parteReal = a.parteReal + b.parteReal;
    residuo.parteImaginaria = a.parteImaginaria + b.parteImaginaria;
    residuo.signoParteImaginaria = (residuo.parteImaginaria > 0) ? ' +' : ' ';
    return residuo;
}

int main() {
    partesComplejo primerComplejo;
    partesComplejo segundoComplejo;
    partesComplejo resultado;

    cout << "Ingrese parte real del primer numero complejo" << endl;
    cin >> primerComplejo.parteReal;
    cout << "Ingrese parte imaginaria del primer numero complejo" << endl;
    cin >> primerComplejo.parteImaginaria;

    cout << "Ingrese parte real del segundo numero complejo" << endl;
    cin >> segundoComplejo.parteReal;
    cout << "Ingrese parte imaginaria del segundo numero complejo" << endl;
    cin >> segundoComplejo.parteImaginaria;

    resultado = suma(primerComplejo, segundoComplejo);
    cout << "La suma es: " << resultado.parteReal << resultado.signoParteImaginaria << resultado.parteImaginaria << 'j' << endl;
    return 0;
}


