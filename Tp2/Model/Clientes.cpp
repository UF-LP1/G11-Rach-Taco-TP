


#include "Clientes.h"



Clientes:: Clientes( string Hora_llegada,  string Dia_llegada,  string Direccion, list<Articulo>art, list<Herramientas> her): horaDeLlegada(Hora_llegada),diaDeLlegada(Dia_llegada) {
    this->direccion = Direccion;

}




Articulo Clientes::cambiar( Articulo ar) {
    return ar;
}


string Clientes::get_horaDeLlegada() {
    return this->horaDeLlegada;
}


string Clientes::get_diaDeLlegada() {
    return this->diaDeLlegada;
}




string Clientes::get_direccion() {
    return this->direccion;
}


void Clientes::mostrarFoto() {
    return;
}


void Clientes::mostrarArtRoto() {
    return;
}
void Clientes::agregarart(Articulo) {
    
}
void Clientes::agregarher(Herramientas) {

    
}

float Clientes::generarPresupuesto()
{
   float presupuesto=0;
   int i=0;

   list<Articulo>::iterator itArt = this->carritoart.begin(); //igualo el iterador al principio de la lista
   list<Herramientas>::iterator itHer = this->carritoh.begin(); //igualo el iterador al principio de la lista
   
   for (i = 0; i < this->carritoart.size();i++) { //recorro las listas y acumulo los precios
  
       if(itArt->get_stock() == true)
       presupuesto = presupuesto + itArt->get_precio();
       itArt++;
   };
   for (i = 0; i < this->carritoh.size(); i++) {
       presupuesto = presupuesto + (itHer->get_precioAlquiler()*itHer->get_HorasDeAlquiler() )+ itHer->get_precioSeguro(); //multiplico el precio por las horas alquiladas
       itHer++;
   }

    return presupuesto;
}


void Clientes::set_direccion( string Direc) {
    this->direccion=Direc;
}


 Clientes::~Clientes() {

}