/**
 * Project Untitled
 */


#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Articulo.h"


class ArtFerreteria: public Articulo {
public: 
    ArtFerreteria(string TipoDeProducto, bool Stock, string productoDeFerreteria, float Precio, bool Cambio, string EstadoArticulo);
/**
 * @param string
 * @param bool
 */

    
string get_tipoDeProducto();
    
bool get_stock();
    
string get_ProductoFerreteria();
protected: 
    
~ ArtFerreteria();
private: 
    string tipoDeProducto;
    bool stock;
    string ProductoFerreteria;
};

#endif //_ARTFERRETERIA_H