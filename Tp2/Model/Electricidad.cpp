


#include "Electricidad.h"






 Electricidad::Electricidad(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string ProductoDeElectricidad ) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     
     this->ProductoElectricidad = ProductoDeElectricidad;
   

}




string Electricidad::get_ProductoElectricidad() {
    return this->ProductoElectricidad;
}

 Electricidad::~Electricidad() {

}