#include "Fecha.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int Fecha::getDia() { return dia; }
void Fecha::setDia(int val) {
    if( val >= 1 && val <= 31){
        dia = val;
    }
    else{
        dia = -1;
    }
}

int Fecha::getMes() { return mes; }
void Fecha::setMes(int val) {
    if( val >= 1 && val <=12){
        mes = val;
    }
    else{
        mes = -1;
    }
}

int Fecha::getAnio() { return anio; }
void Fecha::setAnio(int val) {
    if( val >= 1 ){
        anio = val;
    }
}

void Fecha::mostrar(){
    cout << "  " << dia << "/" << mes << "/" << anio << endl;
}

void Fecha::cargar(){
    cout << "  DIA: ";
    cin >> dia;
    cout << "  MES: ";
    cin >> mes;
    cout << "  AÑO: ";
    cin >> anio;
}
