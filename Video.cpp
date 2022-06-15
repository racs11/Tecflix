#include "Video.h"


Video::Video(int I,string n,float d, string g, int c)
{
    ID = I;
    nombre = n;
    duracion = d;
    genero = g;
    calificacion = c;
}
string Video::getGenero(){

    return genero;

}
int Video::getCalificacion(){
    return calificacion;
}
void Video::Mostrar(){

    cout<<"Soy un video";
}
int Video::getID(){
    return ID;
}
float Video::getDuracion(){
    return duracion;
}
string Video::getNombre(){
    return nombre;
}
int Video::tipo(){
    return 0;
}
void Video::setCalificacion(int c){

    calificacion = c;

}
