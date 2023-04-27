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
Cocina(string TipoDeProducto, bool Stock, string productoDeCocina, float Precio, bool Cambio, string EstadoArticulo);
    

    
bool get_stock();
    
string get_ProductoCocina();
protected: 
    
 ~Cocina();
private: 
    string tipoDeProducto;
    bool stock;
    string ProductoCocina;
};

#endif //_COCINA_H