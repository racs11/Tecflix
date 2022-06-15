#include <iostream>
#include<fstream>
#include<typeinfo>

#include "Video.cpp"
#include "Serie.cpp"
#include "Pelicula.cpp"

using namespace std;

int main(){

    bool bandera = true;
    int respuesta;
    int cont;



    Video *videos[3];

    videos[0] = new Pelicula(1,"Rapidos y Furiosos 74",120,"Carreras",5);
    videos[1] = new Serie(2,"The boys",20,"Superheroes",4,"1.El comienzo",1);
    videos[2] = new Pelicula(3,"The Batman",160,"Superheroes",4);


    while(bandera){

    cout<<"1.Buscar videos por genero o calificación" <<endl;
    cout<<"2.Buscar series por calificación"<<endl;
    cout<<"3.Buscar peliculas por calificacion"<<endl;
    cout<<"4.Calificar un video"<<endl;
    cout<<"0.Salir"<<endl;
    cin>>respuesta;



    switch(respuesta){
        case 1 :

            cout<<"Buscar videos por calificacion o genero?"<<endl;
            cout<<"1.calificacion 2.genero"<<endl;
            cin>>respuesta;
            if(respuesta == 1){
                cout<<"Que calificacion desea buscar? "<<endl;
                cout<<"Rango: 1-5"<<endl;
                cin>>respuesta;
                cout<<""<<endl;
                for(int i=0;i<3;i++){
                    Video *actual = videos[i];
                    if(actual->getCalificacion() == respuesta){
                            actual->Mostrar();
                    }
                }
            }
            else if(respuesta == 2){
                string genero;
                cout<<"Escriba el genero a buscar tal y como aparece: "<<endl;
                cout<<"Carreras Superheroes"<<endl;
                cin>>genero;
                cout<<""<<endl;
                for(int i=0;i<3;i++){
                    Video *actual = videos[i];
                    if (actual->getGenero() == genero){
                        actual->Mostrar();

                }
            }
            }
            break;
        case 2 :
                cout<<"Seleccione la calificacion a buscar: "<<endl;
                cout<<"Rango: 1-5"<<endl;
                cin>>respuesta;
                for(int i=0;i<3;i++){
                    Video *actual = videos[i];
                    if(actual->getCalificacion() == respuesta && actual->tipo() == 1 ){
                            actual->Mostrar();
                    }
                }
                cout<<" "<<endl;

                break;
        case 3 :
                cout<<"Seleccione la calificacion a buscar: "<<endl;
                cout<<"Rango: 1-5"<<endl;
                cin>>respuesta;
                for(int i=0;i<3;i++){
                    Video *actual = videos[i];
                    if(actual->getCalificacion() == respuesta && actual->tipo() == 2){
                            actual->Mostrar();
                    }
                }
                cout<<" "<<endl;
                break;
        case 4 :
            {


            int titulo;
            cout<<"Seleccione el titulo a calificar: "<<endl;
            for(int i=0;i<3;i++){
                    Video *actual = videos[i];
                    string nombre = actual->getNombre();
                    cout<<i+1<<". "<<nombre<<endl;

                }
            cin>>titulo;
            cout<<"Cuantas estrellas le da? "<<endl;
            cout<<"Rango: 1 - 5"<<endl;
            cin>>respuesta;
            Video v1(0,"",0,"",videos[titulo-1]->getCalificacion());
            int nueva = v1+respuesta;
            videos[titulo-1]->setCalificacion(nueva);

            cout<<"Se actualizó la calificacion! "<<endl;
            cout<<" "<<endl;
            videos[titulo-1]->Mostrar();
            cout<<" "<<endl;


            break;
            }
        case 0 :
            bandera = false;
            break;

    }
    }
return 0;
}


