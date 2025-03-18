//.h de datatype DTFecha

#ifndef DTFECHA
#define DTFECHA

class DTFecha{
    private: 
        int dia;
        int mes;
        int anio;
    public:
        DTFecha(int dia, int mes, int anio); //constructor
        ~Publicacion(); //destructor

        //sobrecarga de operadores
        bool operator<(DTFecha fecha); //operador < (menor que)
        bool operator>(DTFecha fecha); //operador > (mayor que)
        bool operator==(DTFecha fecha); //operador == (igual que)

        //getters y setters
        int getDia();
        void setDia(int dia);
        int getMes();
        void setMes(int mes);
        int getAnio();
        void setAnio(int anio);

}


#endif