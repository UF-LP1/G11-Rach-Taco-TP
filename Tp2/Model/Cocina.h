/**
 * Project Untitled
 */


#ifndef _COCINA_H
#define _COCINA_H

#include "Articulo.h"


class Cocina: public Articulo {
public: 
    
/**
 * @param string
 * @param bool
 */
Cocina(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string ProductoCocina);
    

    

string get_ProductoCocina();

 ~Cocina();
private: 
    
    
    string ProductoCocina;
};

#endif //_COCINA_H