class Pelicula:public Video{
    public:
        Pelicula(int I,string n,float d, string g,int c);
        virtual void Mostrar();
        virtual int tipo();
        int operator+(int x){
            int aux = (getCalificacion() + x)/2;

            return aux;

        }
    private:
};


