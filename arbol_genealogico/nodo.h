#ifndef NODO_H
#define NODO_H
#include <string>
using namespace std;

class Nodo
{
    public:
        Nodo(string nombre, string apellido1, string apellido2, string hermanos);
        ~Nodo();

        string getNombre();
        string getApellido1();
        string getApellido2();

    private:
        string _nombre;
        string _apellido1;
        string _apellido2;
        string _hermanos;
        Nodo* _padre;
        Nodo* _madre;

    friend class Arbol;
};

#endif // NODO_H
