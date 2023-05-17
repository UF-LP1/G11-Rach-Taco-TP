

#include "Bazar.h"


 Bazar::Bazar(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo, string productodeBazar ):Articulo( Precio,  Cambio,  EstadoArticulo,   TipoDeProducto,  Stock,codigo) {
     
     this->ProductoBazar = productodeBazar;
     
}


 void Bazar::set_ProdBazar(string prod) {
     this->ProductoBazar = prod;
 }
 string Bazar::get_ProductoBazar() {
    return this->ProductoBazar;
}

 Bazar::~Bazar() {

}