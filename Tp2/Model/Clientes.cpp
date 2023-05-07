/**
 * Project Untitled
 */


#include "Clientes.h"



/**
 * Clientes implementation
 */


/**
 * @param string
 * @param string
 * @param string
 */
Clientes:: Clientes( string Hora_llegada,  string Dia_llegada,  string Direccion, list<Articulo>art, list<Herramientas> her) {

}



/**
 * @param Articulo
 * @return Articulo
 */
Articulo Clientes::cambiar( Articulo) {
    return ;
}

/**
 * @return string
 */
string Clientes::get_horaDeLlegada() {
    return this->horaDeLlegada;
}

/**
 * @return string
 */
string Clientes::get_diaDeLlegada() {
    return this->diaDeLlegada;
}

/**
 * @param Herramientas
 * @return void
 */
void Clientes::alquilar( Herramientas) {
    return;
}

/**
 * @return string
 */
string Clientes::get_direccion() {
    return this->direccion;
}

/**
 * @return void
 */
void Clientes::mostrarFoto() {
    return;
}

/**
 * @return void
 */
void Clientes::mostrarArtRoto() {
    return;
}
list<Articulo> agregarprod(Articulo, list <Articulo>) {

}
list <Herramientas> agregarher(Herramientas, list<Herramientas>) {

}

float Clientes::generarPresupuesto(list<Articulo>art , list<Herramientas> her)
{
   float presupuesto=0;
   int i=0;
   list<Articulo>::iterator itArt = art.begin();
   list<Herramientas>::iterator itHer = her.begin();
   
   for (i = 0; i < art.size();i++) {
  
       if(itArt->get_stock() == true)
       presupuesto = presupuesto + itArt->get_precio();
       *itArt++;
   };
   for (i = 0; i < her.size(); i++) {
       presupuesto = presupuesto + itHer->get_precioAlquiler()+ itHer->get_precioSeguro();
       itHer++;
   }

    return presupuesto;
}

/**
 * @param string
 * @return void
 */
void Clientes::set_direccion( string Direc) {
    this->direccion=Direc;
}

 Clientes::~Clientes() {

}