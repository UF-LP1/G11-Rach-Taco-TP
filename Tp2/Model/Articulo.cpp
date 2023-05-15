


#include "Articulo.h"


Articulo:: Articulo(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock) {
    this->precio = Precio;
    this->cambio = Cambio;
    this->estadoArticulo = EstadoArticulo;
    this->tipoDeProducto = TipoDeProducto;
    this->stock = Stock;
}

float Articulo::get_precio() {
    return this->precio;
}

bool Articulo::get_cambio() {
    return this->cambio;
}


string Articulo::get_estadoArticulo() {
    return this->estadoArticulo;

}
string Articulo::get_tipoDeProducto() {
    return this->tipoDeProducto;

}

bool Articulo::get_stock() {
    return this->stock;

}

void Articulo::set_precio( float price) {
    this->precio=price;
}

void Articulo::set_cambio(bool cam)
{
    this->cambio = cam;
}

void Articulo::set_estadoArticulo(string estado)
{
    this->estadoArticulo = estado;
}

void Articulo::set_tipoDeProducto(string tipo)
{
    this->tipoDeProducto = tipo;
}

void Articulo::set_stock(bool sto)
{
    this -> stock = sto;
}






Articulo::~Articulo() {

}