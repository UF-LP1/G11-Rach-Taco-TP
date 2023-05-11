/**
 * Project Untitled
 */


#ifndef _BAZAR_H
#define _BAZAR_H

#include "Articulo.h"


class Bazar: public Articulo {
public: 
    

    Bazar(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string prouctodeBazar);
    

    
string get_ProductoBazar();

    
~ Bazar();
private: 
     
   
    string ProductoBazar;
};

#endif //_BAZAR_H