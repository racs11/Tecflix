using namespace std;
class Serie:public Video{
    public:
        Serie(int I,string n,float d, string g,int c, string ne, int temp);
        virtual void Mostrar();
        virtual int tipo();
        int operator+(int x){
            int aux = (getCalificacion() + x)/2;

            return aux;

        }



    private:
        string nombre_episodio;
        int temporada;
};
