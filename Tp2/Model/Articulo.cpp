


#include "Articulo.h"


Articulo:: Articulo(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int code,int tam) {
    this->precio = Precio;
    this->cambio = Cambio;
    this->estadoArticulo = EstadoArticulo;
    this->tipoDeProducto = TipoDeProducto;
    this->stock = Stock;
    this->codigo = code;
    this->tamanyo = tam;
}

void Articulo::set_tamanyo(int tam) {
    this->tamanyo = tam;
}

int Articulo::get_tamanyo() {
    return this->tamanyo;
}

int Articulo::get_codigo() {
    return this->codigo;
}

void Articulo::set_codigo(int code) {
    this->codigo = code;
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