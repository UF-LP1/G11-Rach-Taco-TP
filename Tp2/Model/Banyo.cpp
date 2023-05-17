


#include "Banyo.h"





 Banyo::Banyo(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo, string productodeBanyo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock, codigo) {
     
     this->ProductoBanyo = productodeBanyo;
  

}


 void Banyo::set_ProdBanyo(string prod) {
     this->ProductoBanyo = prod;
 }

string Banyo::get_ProductoBanyo() {
    return this->ProductoBanyo;
}

Banyo::~Banyo() {

}