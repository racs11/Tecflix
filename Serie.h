using namespace std;
class Serie:public Video{
    public:
        Serie(int I,string n,float d, string g,int c, string ne, int temp);
        virtual void Mostrar();

    private:
        string nombre_episodio;
        int temporada;
};
