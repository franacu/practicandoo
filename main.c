#include <stdio.h>
#include "helper.h"

int main()
{

    Lista *newlista=newLista();
    ingresar(newlista, newNodo(4));
    ingresar(newlista, newNodo(6));
    ingresar(newlista, newNodo(8));

    if(valorExiste(newlista,1))
    {
        printf("Existe\n");
    } else
        {
            printf("No Existe\n");
        }

    eliminarValorDeLista(newlista,3);
    imprimirLista(newlista);


    return 0;
}
