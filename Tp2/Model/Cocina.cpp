


#include "Cocina.h"




 Cocina::Cocina(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string productoDeCocina) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     this->ProductoCocina = productoDeCocina;

}


 
string Cocina::get_ProductoCocina() {
    return this->ProductoCocina;
}

 Cocina::~Cocina() {

}