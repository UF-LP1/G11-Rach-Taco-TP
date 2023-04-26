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
void Articulo( string,  bool,  string);
    
float get_precio();
    
bool get_cambio();
    
string get_estadoArticulo();
    
/**
 * @param float
 */
void set_precio( float);
    
void get_tipoDeProducto();
    
void get_stock();
void set_precioFab(unsigned int);
unsigned int get_precioFab();

protected: 
    
void Articulo();
private: 
    float precio;
    bool cambio;
    string estadoArticulo;
    unsigned int precioFab;
    
       const string tipoDeProducto;
       
    bool stock;
};

#endif //_ARTICULO_H