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
void Electricidad( string,  bool);
    
string get_tipoDeProducto();
    
bool get_stock();
    
enum get_ProductoElectricidad();
protected: 
    
void Electricidad();
private: 
    const string tipoDeProducto;
    bool stock;
    enum ProductoElectricidad;
};

#endif //_ELECTRICIDAD_H