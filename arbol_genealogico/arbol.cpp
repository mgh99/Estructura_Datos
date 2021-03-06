#include "arbol.h"
#include "nodo.h"
#include <iostream>
using namespace std;

Arbol::Arbol(Nodo* raiz)
{
    _raiz = raiz;
}

Arbol::~Arbol()
{
    delete(_raiz);
}

void Arbol::recorrerA(Nodo* r, int nivel)
{


    identar(nivel);
    cout << "Nombre: " << r->_nombre << " " << r->_apellido1 << " " << r->_apellido2 << endl;
    cout << " =>Sus hermanos son: " << r->_hermanos << endl;


    if(r->_padre != NULL){
        identar(nivel);
        cout << "Rama paterna: " << endl;
        recorrerA(r->_padre, nivel+1);
    }

    if(r->_madre != NULL){
         identar(nivel);
        cout << "Rama materna: " << endl;
        recorrerA(r->_madre, nivel +1);
    }
}

void Arbol::recorrerArbol()
{
    recorrerA(_raiz, 0);
}

void Arbol::buscar()
{
    string nombre, ap1, ap2;

    cout << "----------------------------------------------------------------------------" <<endl;
    cout << "                              INSTRUCCIONES                                 " <<endl<< endl;
    cout << " * Para buscar a un familiar sólo sirven a los que has metido los apellidos " << endl;
    cout << " * Te devolvera el nombre de sus padres y el de sus hermanos                " << endl;
    cout << " * No introduzcas tildes                                                    " << endl;
    cout << "----------------------------------------------------------------------------" <<endl << endl;



    cout << "Introduce el nombre del familiar que quieres buscar: ";
    cin >> nombre;
    cout << "Introduce el primer apellido del familiar: ";
    cin >> ap1;
    cout << "Introduce el segundo apellido del familiar: ";
    cin >> ap2;

    cout << endl;



    if(buscarRecursivo(nombre, ap1, ap2, _raiz)){
        cout << "Famliar encontrado" << endl << endl;
    }else{
        cout << "No existe el familiar que estás buscando" << endl << endl;
    }


}



bool Arbol::buscarRecursivo(string nombre, string ap1,string ap2, Nodo* r)
{

    bool encontradoPadre = false, encontradoMadre = false;
    if(r->_nombre == nombre && r->_apellido1 == ap1 && r->_apellido2 == ap2 ){

        cout << "Nombre: " << r->_nombre << " " << r->_apellido1 << " " << r->_apellido2 << endl;
        cout << " =>Sus hermanos son: " << r->_hermanos << endl;

        if(r->_padre != NULL){

            cout << "Padre: " <<  r->_padre->_nombre <<" " << r->_padre->_apellido1 <<" "<< r->_padre->_apellido2<< endl;

        }

        if(r->_madre != NULL){

            cout << "Madre: " <<  r->_madre->_nombre <<" " << r->_madre->_apellido1 <<" "<< r->_madre->_apellido2<< endl << endl;

        }
        return true;
    }else{
        if(r->_padre != NULL){
          encontradoPadre =  buscarRecursivo(nombre, ap1, ap2, r->_padre);

        }

        if(r->_madre != NULL){
            encontradoMadre = buscarRecursivo(nombre, ap1, ap2, r->_madre);
        }

    return (encontradoPadre || encontradoMadre);
    }

}

void Arbol::identar(int nivel)
{
    for(int i = 0; i<nivel; i++){
        cout << "   ";
    }
}
