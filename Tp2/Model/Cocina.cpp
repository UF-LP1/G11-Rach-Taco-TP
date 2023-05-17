


#include "Cocina.h"




 Cocina::Cocina(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo, string productoDeCocina) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock,codigo) {
     this->ProductoCocina = productoDeCocina;

}


 void Cocina::set_ProdCocina(string prod) {
     this->ProductoCocina = prod;
 }
string Cocina::get_ProductoCocina() {
    return this->ProductoCocina;
}

 Cocina::~Cocina() {

}