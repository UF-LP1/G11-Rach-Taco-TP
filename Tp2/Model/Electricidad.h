/**
 * Project Untitled
 */


#ifndef _ELECTRICIDAD_H
#define _ELECTRICIDAD_H

#include "Articulo.h"


class Electricidad: public Articulo {
public: 
    
/**
 * @param string
 * @param bool
 */
    Electricidad(string TipoDeProducto, bool Stock, string productoDeElectricidad, float Precio, bool Cambio, string EstadoArticulo);
    
string get_tipoDeProducto();
    
bool get_stock();
    
string get_ProductoElectricidad();

    
 ~Electricidad();
private: 
     string tipoDeProducto;
    bool stock;
    string ProductoElectricidad;
};

#endif //_ELECTRICIDAD_H