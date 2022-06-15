#include "Pelicula.h"

Pelicula::Pelicula(int I,string n,float d, string g,int c):Video(I,n,d,g,c)
{

}
void Pelicula:: Mostrar(){
    cout<<"Id:"<<getID()<<endl;
    cout<<getNombre()<<endl;
    cout<<"Duracion: "<<getDuracion()<<" minutos"<<endl;
    cout<<"Genero: "<<getGenero()<<endl;
    cout<<"Calificacion: "<<getCalificacion()<<" Estrellas"<<endl;

    cout<<" "<<endl;



}
int Pelicula::tipo(){
    return 2;
}
