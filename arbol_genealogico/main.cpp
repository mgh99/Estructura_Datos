#include <iostream>
#include "arbol.h"
#include "nodo.h"

using namespace std;

int main()
{
    string minombre, miApellido1, miApellido2, hermanos;
    int op, tecla;

    cout << "============================================================================="<<endl;
    cout << "                      CREA TU PROPIO ARBOL GENEALOGICO!!                     " << endl;
    cout << "============================================================================="<<endl<<endl;

    cout << "|----------------------------------------------------------------------------|" <<endl;
    cout << "|                              INSTRUCCIONES                                 |" <<endl;
    cout << "|                                                                            |" << endl;
    cout << "| * Separar con guion bajo (_) si se trata de un nombre compuesto;           |" << endl;
    cout << "|           Por ejemplo: Carlos_Jose                                         |" << endl;
    cout << "| * Para escribir el nombre de los hermanos se separan con comas;            |" << endl;
    cout << "|           Por ejemplo: Ana,Pedro                                           |" << endl;
    cout << "| * Si en algun caso no hay hermanos poner un guion (-), o un punto (.)      |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|----------------------------------------------------------------------------|" <<endl << endl;


    cout << "Dime tu nombre: ";
    cin >> minombre;
    cout << "Dime tu primer apellido: ";
    cin >> miApellido1;
    cout << "Dime tu segundo apellido: ";
    cin >> miApellido2;
    cout << "Dime el nombre de tus hermanos: ";
    cin >> hermanos;
    cout << endl;
    cout << "============================================================================="<<endl;
    cout << "============================================================================="<<endl;

    Nodo *inicial= new Nodo(minombre, miApellido1, miApellido2, hermanos);

    cout << "*****************************************************************************" << endl;
    Arbol a = Arbol(inicial);
    cout << "============================================================================="<<endl;
    cout << "                      ESTE ES TU ARBOL GENEALOGICO                           " << endl;
    cout << "============================================================================="<<endl;
    a.recorrerArbol();

    cout <<endl <<"Pulsa 1 para continuar: ";
    cin >> tecla;


    if(tecla == 1){
        system("clear");
    }


    do{



    cout << "                                     MENU              " << endl;
    cout << "                 -----------------------------------------" << endl;
    cout << "                     1.- Buscar un miembro de la familia" << endl;
    cout << "                     2.- Ver el arbol genealogico       " << endl;
    cout << "                     3.- Salir" << endl << endl;
    cout << "Introduce una opcion: ";
    cin >> op;

    switch (op) {
    case 1:
        system("clear");
        a.buscar();

        break;
    case 2:

        system("clear");

        cout << "============================================================================="<<endl;
        cout << "                      ESTE ES TU ARBOL GENEALOGICO                           " << endl;
        cout << "============================================================================="<<endl;
        a.recorrerArbol();

        break;
    case 3:

        system("clear");

        break;
    default:
        system("clear");

        if (op != 1 || op != 2 || op != 3){
            cout << "Introduce un valor valido" << endl;
        }
        break;

    }
    }while(op !=3);



    delete(inicial);
    return 0;
}
