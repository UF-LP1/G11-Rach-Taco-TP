#include "Ferreteria.h"


 Ferreteria::Ferreteria( string Direcc,  bool estado) {
     this->direccion = Direcc;
     this->abierto = estado;
}

 void Ferreteria::set_abierto(bool estado) {
     this->abierto = estado;
 }

void Ferreteria::set_direccion( string dire) {
    this->direccion = dire;
}


string Ferreteria::get_direccion() {
    return this->direccion;
}


bool Ferreteria::get_abierto() {
    return this->abierto;
}

Ferreteria::~Ferreteria() {

}

