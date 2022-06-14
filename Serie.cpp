#include "Serie.h"

Serie::Serie(int I,string n,float d, string g, int ep, string ne, int temp):Video(I,n,d,g)
{

    episodios = ep;
    nombre_episodio = ne;
    temporada = temp;

}
