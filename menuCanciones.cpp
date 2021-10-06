#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
#include "Fecha.h"
#include "Canciones.h"
#include "funciones.h"

void Canciones(){
 int opc;
    while(true){
        cout<<"MENU CANCIONES"<<endl;
        cout<<"--------------------"<<endl;
        cout<<""<<endl;
        cout<<"1) AGREGAR CANCION"<<endl;
        cout<<"2) LISTAR CANCION POR ID"<<endl;
        cout<<"3) LISTAR TODAS LAS CANCIONES"<<endl;
        cout<<"4) MODIFICAR FECHA DE ESTRENO"<<endl;
        cout<<"5) ELIMINAR CANCION"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0) VOLVER AL MENU PRINCIPAL"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1: agregarCancion();
            break;
        case 2:;
            break;
        case 3:;
            break;
        case 4:;
            break;
        case 5:;
            break;
        case 0:;
            break;
        default:;
            break;
        }
    }
}
