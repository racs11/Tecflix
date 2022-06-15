using namespace std;
class Video{
    public:
        Video(int I,string n,float d, string g,int c);
        string getGenero();
        int getCalificacion();
        virtual void Mostrar();
        int getID();
        string getNombre();
        float getDuracion();
        virtual int tipo();
        int operator+(int x){
            int aux = (calificacion + x)/2;

            return aux;

        }
        void setCalificacion(int c);
    private:
        int ID;
        string nombre;
        float duracion;
        string genero;
        int calificacion;
};
