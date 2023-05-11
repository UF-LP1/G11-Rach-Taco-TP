/**
 * Project Untitled
 */


#include "Electricidad.h"

#include "Electricidad.h"




 Electricidad::Electricidad(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string ProductoDeElectricidad ) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     
     this->stock = Stock;
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoElectricidad = ProductoDeElectricidad;
     this->precio = Precio;
   

}




string Electricidad::get_ProductoElectricidad() {
    return this->ProductoElectricidad;
}

 Electricidad::~Electricidad() {

}