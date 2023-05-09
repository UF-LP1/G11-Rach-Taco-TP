/**
 * Project Untitled
 */


#ifndef _ARTICULO_H
#define _ARTICULO_H


#include <iostream>
#include <string>
using namespace std;



class Articulo{
public: 
    

Articulo( float Precio, bool Cambio,string EstadoArticulo,   string TipoDeProducto, bool Stock);
    
float get_precio();
    
bool get_cambio();
    
string get_estadoArticulo();
 
string get_tipoDeProducto();

bool get_stock();


void set_precio( float pre);
void set_cambio(bool cam);
void set_estadoArticulo(string estado);
void set_tipoDeProducto(string tipo);
void set_stock(bool);
    




    
~Articulo();
private: 
    float precio;
    bool cambio;
    string estadoArticulo;
    string tipoDeProducto;
    bool stock;
    friend class ArtFerreteria;
    friend class Banyo;
    friend class Bazar;
    friend class Cerrajeria;
    friend class Cocina;
    friend class Electricidad;
};

#endif //_ARTICULO_H