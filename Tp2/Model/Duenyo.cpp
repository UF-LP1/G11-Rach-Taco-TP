


#include "Duenyo.h"



int Duenyo::cantclientes = 0;

Duenyo::Duenyo(string name, string ape, const string DNI, static int cantc) :dni(DNI) {
     this-> Nombre = name;
     this->Apellido = ape;
     cantclientes++;
}
int Duenyo::get_cantclientes() {
    return cantclientes;

}
void Duenyo::set_nombre(string name) {
    this->Nombre = name;
}

void Duenyo::set_apellido(string ape) {
    this->Apellido = ape;
}
void Duenyo::atender_cliente( Clientes) {
    cout << "Hola como estas?";
    return;
}

string Duenyo::get_nombre() {
    return this->Nombre;
}


string Duenyo::get_apellido() {
    return this->Apellido;
}


string Duenyo::get_dni() {
    return this->dni;
}

 Duenyo::~Duenyo() {
     cantclientes--;
}