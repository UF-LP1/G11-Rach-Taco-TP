/**
 * Project Untitled
 */


#ifndef _BANYO_H
#define _BANYO_H

#include "Articulo.h"


class Banyo: public Articulo {
public: 
    
/**
 * @param string
 * @param bool
 */
 Banyo(string TipoDeProducto, bool Stock, string productoDeBanyo, float Precio, bool Cambio, string EstadoArticulo);
    
string get_tipoDeProducto();
    
bool get_stock();
    
string get_ProductoBanyo();
protected: 
    
~Banyo();
private: 
   
    
    string ProductoBanyo;
};

#endif //_BANYO_H