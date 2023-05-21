


#include "Electricidad.h"






 Electricidad::Electricidad(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo,int tam, string ProductoDeElectricidad ) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock,codigo,tam) {
     
     this->ProductoElectricidad = ProductoDeElectricidad;
   

}


 void Electricidad::set_ProdElec(string prod) {
     this->ProductoElectricidad = prod;
 }

string Electricidad::get_ProductoElectricidad() {
    return this->ProductoElectricidad;
}

 Electricidad::~Electricidad() {

}