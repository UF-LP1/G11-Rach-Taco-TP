

#include "Bazar.h"


 Bazar::Bazar(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string productodeBazar ):Articulo( Precio,  Cambio,  EstadoArticulo,   TipoDeProducto,  Stock) {
     
     this->ProductoBazar = productodeBazar;
     
}



 string Bazar::get_ProductoBazar() {
    return this->ProductoBazar;
}

 Bazar::~Bazar() {

}