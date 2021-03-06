#ifndef NODE_H
#define NODE_H


class node
{
public:
    node(int v, node *sig = nullptr)
    {
       valor = v;
       siguiente = sig;
    }
private:
    int valor;
    node *siguiente;
};

#endif // NODE_H
