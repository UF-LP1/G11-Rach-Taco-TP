/**
 * Project Untitled
 */


#ifndef _ARTICULO_H
#define _ARTICULO_H

#include "ArtFerreteria.h"


class Articulo: public ArtFerreteria {
public: 
    
/**
 * @param string
 * @param bool
 * @param string
 */
void Articulo(void string, void bool, void string);
    
float get_precio();
    
bool get_cambio();
    
string get_estadoArticulo();
    
/**
 * @param float
 */
void set_precio(void float);
    
void get_tipoDeProducto();
    
void get_stock();
protected: 
    
void Articulo();
private: 
    float precio;
    bool cambio;
    string estadoArticulo;
    void tipoDeProducto cosnt string;
    bool stock;
};

#endif //_ARTICULO_H