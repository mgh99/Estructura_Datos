#ifndef LISTA_H
#define LISTA_H
#include "node.h"


class lista
{
private:
    node *primero;
    node *actual;
public:
    //primero = actual = nullptr; ????
    lista()
    {
        primero = actual = nullptr;
    }
    //que hace el destructor?
    ~lista();

    void add(int v);
    void erase(int v);
    void printAll();//porque no tiene int v???
    bool Listavacia()
    {
        return primero == nullptr;
    }
    void siguiente ()//no entiendo lo que hace
    {
        if(actual) actual = actual->siguiente;
    }
    void pimero()
    {
        actual = primero;
    }
    void ultimo()
    {
        Primero();
        if(!ListaVacia())
            while(actual->siguiente)
                Siguiente();
    }
    bool Actual()
    {
        return actual != nullptr;
    }
    int ValorActual()
    {
        return actual->valor;
    }

};

#endif // LISTA_H
