/**
 * Project Untitled
 */


#ifndef _ARTICULO_H
#define _ARTICULO_H

#include "ArtFerreteria.h"
#include <iostream>
#include <string>
using namespace std;



class Articulo: public ArtFerreteria {
public: 
    
/**
 * @param string
 * @param bool
 * @param string
 */
Articulo( float Precio, bool Cambio,string EstadoArticulo,  const string TipoDeProducto, bool Stock);
    
float get_precio();
    
bool get_cambio();
    
string get_estadoArticulo();
    
/**
 * @param float
 */
void set_precio( float);
    
void get_tipoDeProducto();
    
void get_stock();


protected: 
    
~Articulo();
private: 
    float precio;
    bool cambio;
    string estadoArticulo;
    const string tipoDeProducto;
    bool stock;
};

#endif //_ARTICULO_H