#include "nodo.h"
#include <iostream>

using namespace std;

Nodo::Nodo(string nombre, string apellido1, string apellido2, string hermanos )
{
    _nombre = nombre;
    _apellido1 = apellido1;
    _apellido2 = apellido2;
    _hermanos = hermanos;

    char respp, respm;
    string np, npAp1, npAp2, nm, nmAp1, nmAp2, hrmP, hrmM;

    cout << endl;
    cout << "   Conoces a tu padre? (S/N): ";
    cin >> respp;
    cout << endl;

    if( respp == 'S' || respp == 's'){
        cout << "Dime el nombre del padre: ";
        cin >> np;
        cout << endl;
        cout << "Dime el primer apellido del padre: ";
        cin >> npAp1;
        cout << "Dime el segundo apellido del padre: ";
        cin >> npAp2;
        cout << endl;
        cout << "Dime hermanos del padre: ";
        cin >> hrmP;
        cout << endl;
        cout << "-----------------------------------------------------------------------------"<<endl;
    }


    cout << "   Conoces a tu madre? (S/N): ";
    cin >> respm;
    cout << endl;


    if( respm == 'S' || respm == 's'){
        cout << "Dime nombre de la madre: ";
        cin >> nm;
        cout << endl;
        cout << "Dime el primer apellido de la madre: ";
        cin >> nmAp1;
        cout << "Dime el segundo apellido de la madre: ";
        cin >> nmAp2;
        cout << endl;
        cout << "Dime hermanos de la madre: ";
        cin >> hrmM;
        cout << "-----------------------------------------------------------------------------"<<endl;
    }

    if(respp == 'S' || respp == 's'){
        cout << "Para " << np << " " << npAp1 << " " << npAp2 << " : "<<endl;
        cout << "*****************************************************************************"<<endl;
        _padre=new Nodo(np,npAp1,npAp2, hrmP);
    }

    if(respm == 'S' || respm == 's'){
        cout << "Para " << nm << " " << nmAp1 << " " << nmAp2 << " : "<<endl;
        cout << "*****************************************************************************"<<endl;
        _madre=new Nodo(nm,nmAp1,nmAp2, hrmM);
    }


}

Nodo::~Nodo()
{
    if(this->_padre!= NULL){
        delete(this->_padre);
    }

    if(this->_madre!= NULL){
        delete(this->_madre);
    }

    delete(this);
}

string Nodo::getNombre()
{
    return _nombre;
}

string Nodo::getApellido1()
{
    return _apellido1;
}

string Nodo::getApellido2()
{
    return _apellido2;
}
