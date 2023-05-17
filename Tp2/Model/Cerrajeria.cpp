


#include "Cerrajeria.h"





 Cerrajeria::Cerrajeria(float Precio, bool Cambio, string EstadoArticulo, string Tipodeproducto, bool Stock,int codigo, string TipoDeLlave, string productoDeCerrajeria) :Articulo(Precio, Cambio, EstadoArticulo,Tipodeproducto, Stock,codigo) { 
     
     this->ProductoCerrajeria = productoDeCerrajeria;
   

}
 void Cerrajeria::set_ProdCerraj(string prod) {
     this->ProductoCerrajeria = prod;
 }

string Cerrajeria::get_tipoDeLlave() {
    return this->tipoDeLlave;
}




string Cerrajeria::get_ProductoCerrajeria() {
    return this->ProductoCerrajeria;
}

 Cerrajeria::~Cerrajeria() {

}