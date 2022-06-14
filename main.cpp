#include <iostream>

#include "Video.cpp"
#include "Serie.cpp"
#include "Pelicula.cpp"

using namespace std;

int main(){

    bool bandera = true;
    int respuesta;

    while(bandera){

    cout<<"1.Cargar archivos de datos"<<endl;
    cout<<"2.Buscar por genero o calificación" <<endl;
    cout<<"3.Buscar por calificación en serie"<<endl;
    cout<<"4.Buscar peliculas por calificacion"<<endl;
    cout<<"5.Calificar un video"<<endl;
    cout<<"0.Salir"<<endl;
    cin>>respuesta;

    switch(respuesta){
        case 1 :

        case 2 :

        case 3 :

        case 4 :

        case 5 :

        case 0 : bandera = false;

    }
    }
return 0;
}
