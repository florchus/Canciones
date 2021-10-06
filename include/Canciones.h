#ifndef CANCIONES_H
#define CANCIONES_H
#include "Fecha.h"
class Canciones
{
private:
    int IDCancion;
    char Nombre[30];
    char NombreAutor[30];
    int IDInterprete;
    Fecha FechaEstreno;
    bool Estado;
public:
    int getIDCancion();
    char *getNombre();
    char *getNombreAutor();
    int getIDInterprete();
    Fecha getFechaEstreno();
    bool getEstado();
    void setIDCancion(int );
    void setNombre(char *);
    void setNombreAutor(char *);
    void setIDInterprete(int );
    void setFechaEstreno(Fecha );
    void setEstado(bool );

    bool leerDeDisco(int);
    bool grabarEnDisco(int);
    void grabarEnDisco();

    void Cargar();
    void Listar();
};

#endif // CANCIONES_H
