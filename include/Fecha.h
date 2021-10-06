#ifndef FECHA_H
#define FECHA_H


class Fecha
{
private:
        int dia;
        int mes;
        int anio;
public:
        int getDia();
        void setDia(int);
        int getMes();
        void setMes(int);
        int getAnio();
        void setAnio(int);
        void cargar();
        void mostrar();
};

#endif // FECHA_H
