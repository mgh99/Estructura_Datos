#ifndef ARBOL_H
#define ARBOL_H
#include "nodo.h"

class Arbol
{
    public:
        Arbol(Nodo* raiz);
        ~Arbol();

        void recorrerA(Nodo *r, int nivel);
        void recorrerArbol();
        void buscar();
        bool buscarRecursivo(string nombre, string ap1, string ap2, Nodo *r);
        void identar(int nivel);



    private:
        Nodo* _raiz;

};


#endif // ARBOL_H
