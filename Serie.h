using namespace std;
class Serie:public Video{
    public:
        Serie(int I,string n,float d, string g, int ep, string ne, int temp);


    private:
        int episodios;
        string nombre_episodio;
        int temporada;
};
