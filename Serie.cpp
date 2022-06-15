#include "Serie.h"

Serie::Serie(int I,string n,float d, string g,int c, string ne, int temp):Video(I,n,d,g,c)
{

    nombre_episodio = ne;
    temporada = temp;
}
void Serie:: Mostrar(){

    cout<<"Id:"<<getID()<<endl;
    cout<<getNombre()<<endl;
    cout<<"Temporada: "<<endl;
    cout<<"episodio: "<<nombre_episodio<<endl;
    cout<<"Duracion: "<<getDuracion()<<" minutos"<<endl;
    cout<<"Genero: "<<getGenero()<<endl;
    cout<<"Calificacion: "<<getCalificacion()<<" Estrellas"<<endl;

    cout<<" "<<endl;


}
int Serie::tipo(){
    return 1;
}
