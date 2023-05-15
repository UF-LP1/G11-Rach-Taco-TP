


#include "Duenyo.h"




Duenyo::Duenyo(string name, string ape, const string DNI) :dni(DNI) {
     this-> Nombre = name;
     this->Apellido = ape;
}

void Duenyo::set_nombre(string name) {
    this->Nombre = name;
}

void Duenyo::set_apellido(string ape) {
    this->Apellido = ape;
}
void Duenyo::atender_cliente( Clientes) {
    return;
}


float Duenyo::cobrar( Clientes) {
    return 0.0;
}


float Duenyo::devolverSeguro( Herramientas, Clientes) {
    return 0.0;
}


void Duenyo::identificarArticulo( Clientes) {
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

}