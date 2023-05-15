


#include "Cerrajeria.h"





 Cerrajeria::Cerrajeria(float Precio, bool Cambio, string EstadoArticulo, string Tipodeproducto, bool Stock, string TipoDeLlave, string productoDeCerrajeria) :Articulo(Precio, Cambio, EstadoArticulo,Tipodeproducto, Stock) { //no se xq da error tipo de producto
     
     this->ProductoCerrajeria = productoDeCerrajeria;
   

}

string Cerrajeria::get_tipoDeLlave() {
    return this->tipoDeLlave;
}




string Cerrajeria::get_ProductoCerrajeria() {
    return this->ProductoCerrajeria;
}

 Cerrajeria::~Cerrajeria() {

}