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
 Banyo(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string productodeBanyo);
    

string get_ProductoBanyo();
protected: 
    
~Banyo();
private: 
   
    
    string ProductoBanyo;
};

#endif //_BANYO_H