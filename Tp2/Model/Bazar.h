/**
 * Project Untitled
 */


#ifndef _BAZAR_H
#define _BAZAR_H

#include "Articulo.h"


class Bazar: public Articulo {
public: 
    
/**
 * @param string
 * @param bool
 */
    Bazar(string TipoDeProducto, bool Stock, string productoDeBazar, float Precio, bool Cambio, string EstadoArticulo);
    
string get_tipoDeProducto();
    
bool get_stock();
    
string get_ProductoBazar();

    
~ Bazar();
private: 
     
   
    string ProductoBazar;
};

#endif //_BAZAR_H