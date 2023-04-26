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
void Clientes::Clientes( string,  string,  string) {

}

/**
 * @param precio
 * @return Articulo
 */
Articulo Clientes::comprar( precio) {
    return null;
}

/**
 * @param Articulo
 * @return Articulo
 */
Articulo Clientes::cambiar( Articulo) {
    return null;
}

/**
 * @return string
 */
string Clientes::get_horaDeLlegada() {
    return "";
}

/**
 * @return string
 */
string Clientes::get_diaDeLlegada() {
    return "";
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
    return "";
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

float Clientes::generarPresupuesto(list<Articulo>art , list<Herramientas> her)
{
   float presupuesto=0;
   int i=0;
   list<Articulo>::iterator itArt = art.begin();
   list<Herramientas>::iterator itHer = her.begin();

   for (i = 0; i < art.size();i++) {
       presupuesto = presupuesto + itArt->get_precio();

   };
   for (i = 0; i < her.size(); i++) {
       presupuesto = presupuesto + itHer->get_precioAlquiler()+ itHer->get_precioSeguro();
   }

    return presupuesto;
}

/**
 * @param string
 * @return void
 */
void Clientes::set_direccion( string) {
    return;
}

void Clientes::Clientes() {

}