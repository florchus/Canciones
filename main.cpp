#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Fecha.h"
#include "Canciones.h"
#include "funciones.h"
#include "menuCanciones.h"
using namespace std;

int main()
{
    int opc;
    while(true){
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"--------------------"<<endl;
        cout<<""<<endl;
        cout<<"1) MENU CANCIONES"<<endl;
        cout<<"2) MENU INTERPRETES"<<endl;
        cout<<"3) REPORTES"<<endl;
        cout<<"4) CONFIGURACION"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0) FIN DEL PROGRAMA"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1: Canciones();
            break;
        case 2:;
            break;
        case 3:;
            break;
        case 4:;
            break;
        case 0: return 0;
            break;
        default:;
            break;
        }
    }
    return 0;
}
