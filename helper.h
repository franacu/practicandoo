//
// Created by Fran on 18/07/2023.
//

#ifndef PRACTICANDO_PARA_RECU_HELPER_H
#define PRACTICANDO_PARA_RECU_HELPER_H

typedef struct nodo
{
    int valor;
    struct nodo *sig;
}Nodo;
typedef struct lista
{
    Nodo *cabecera;
}Lista;

Nodo *newNodo(int valor);
Lista *newLista();
void ingresar(Lista *lista,Nodo *nodoAInsertar);
int valorExiste(Lista *lista,int ValorABuscar);
void eliminarValorDeLista(Lista *lista,int valorAEliminar);
void insertarOrdenado(Lista *lista,Nodo *nodoAInsertar);
void imprimirLista(Lista *lista);

#endif //PRACTICANDO_PARA_RECU_HELPER_H
