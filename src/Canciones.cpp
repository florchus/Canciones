#include "canciones.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Fecha.h"
using namespace std;

int Canciones::getIDCancion()
{
    return IDCancion;
}
char *Canciones::getNombre()
{
    return Nombre;
}
char *Canciones::getNombreAutor()
{
    return NombreAutor;
}
int Canciones::getIDInterprete()
{
    return IDInterprete;
}
Fecha Canciones::getFechaEstreno()
{
    return FechaEstreno;
}
bool Canciones::getEstado()
{
    return Estado;
}
void Canciones::setIDCancion(int id)
{
    IDCancion = id;
}
void Canciones::setNombre(char *n)
{
    strcpy(Nombre,n);
}
void Canciones::setNombreAutor(char *n)
{
    strcpy(NombreAutor,n);
}
void Canciones::setIDInterprete(int id)
{
    IDInterprete = id;
}
void Canciones::setFechaEstreno(Fecha f )
{
    FechaEstreno = f;
}
void Canciones::setEstado(bool e)
{
    Estado = e;
}
bool Canciones::grabarEnDisco(int pos)
{
    bool guardo;
    FILE *p;
    p = fopen("canciones.dat", "rb+");
    if( p == NULL )
    {
        return false;
    }
    fseek(p, sizeof(Canciones)*pos, SEEK_SET);
    guardo = fwrite(this, sizeof *this, 1, p);
    fclose(p);
    return guardo;
}
void Canciones::grabarEnDisco()
{
    FILE *p;
    p = fopen("canciones.dat", "ab");
    if( p == NULL )
    {
        return;
    }
    fwrite(this, sizeof *this, 1, p);
    fclose(p);
}
bool Canciones::leerDeDisco(int pos)
{
    bool lectura;
    FILE *p;
    p = fopen("canciones.dat", "rb");
    if( p == NULL )
    {
        return false;
    }
    fseek(p, sizeof(Canciones)*pos, SEEK_SET);
    lectura = fread(this, sizeof *this, 1, p);
    fclose(p);
    return lectura;
}

void Canciones::Cargar()
{
    cout<<"Ingrese el ID de Cancion: "<<endl;
    cin>>IDCancion;
    cin.ignore();
    cout<<"Ingese el Nombre: "<<endl;
    cin.getline(Nombre,30);
    cout<<"Ingrese el Nombre del Autor: "<<endl;
    cin.getline(NombreAutor,30);
    cout<<"Ingrese el ID de interprete: "<<endl;
    cin>>IDInterprete;
    FechaEstreno.cargar();
    cout<<"Ingrese el Estado: "<<endl;
    cin>>Estado;
}
