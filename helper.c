//
// Created by Fran on 18/07/2023.
//
#include "helper.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Nodo *newNodo(int valor)
{
    Nodo *aux= malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Sin memoria");
    }else
        {
            aux->valor=valor;
            aux->sig=NULL;
        }
    return aux;
}
Lista *newlista()
{
    Lista *lista= malloc(sizeof(Lista));
    if(lista->cabecera==NULL)
    {
        printf("No tiene memoria");
    }
    lista->cabecera=NULL;
    return lista;
}
void ingresar(Lista *lista,Nodo *nodoAInsertar)
{
    if(lista->cabecera==NULL)
    {
        lista->cabecera=nodoAInsertar;
    }else
        {
            Nodo *aux=lista->cabecera;
            while(aux->sig!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=nodoAInsertar;
        }
}
int valorExiste(Lista *lista,int ValorABuscar)
{
    Nodo *aux=lista->cabecera;
    while(aux!=NULL && aux->valor!=ValorABuscar)
    {
        aux=aux->sig;
    }
    return aux!=NULL;
}
void eliminarValorDeLista(Lista *lista,int valorAEliminar)
{
    if(lista->cabecera==NULL)
    {
        printf("lista vacia");
    }else
        {
            Nodo *ant=lista->cabecera;
            Nodo *act=ant;
            if(act==NULL)
            {
                printf("El valor %d no existe en la lista",valorAEliminar);
            }else
                {
                    if(act==lista->cabecera)
                    {
                        lista->cabecera=act->sig;
                        free(act);
                    }else
                        {
                            ant->sig=act->sig;
                            free(act);
                        }
                }
        }
}
void imprimirLista(Lista *lista)
{
    int cont=0;
    Nodo *aux=lista->cabecera;
    for(;aux!=NULL; aux=aux->sig)
    {
        printf("(%d,)\n",aux->valor);
        cont++;
    }
    printf("Tamanio de lista es %d\n",cont);
}
void insertarOrdenado(Lista *lista,Nodo *nodoAInsertar)
{
    if(lista->cabecera==NULL)
    {
        lista->cabecera=nodoAInsertar;
    }else
        {
            Nodo *ant=lista->cabecera;
            Nodo *act=lista->cabecera;
            while(act!=NULL && act->sig!=nodoAInsertar->sig)
            {
                ant=act;
                act=act->sig;
            }
            if(act==NULL)
            {
                ant->sig=nodoAInsertar;
            }else
                {
                    if(lista->cabecera==act)
                    {
                        nodoAInsertar->sig=lista->cabecera;
                        lista->cabecera=nodoAInsertar;
                    }else
                        {
                            ant->sig=act->sig;
                            nodoAInsertar->sig=act;
                        }
                }
        }
}