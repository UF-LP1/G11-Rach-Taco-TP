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
void Bazar(void string, void bool);
    
string get_tipoDeProducto();
    
bool get_stock();
    
enum get_ProductoBazar();
protected: 
    
void Bazar();
private: 
    const string tipoDeProducto;
    bool stock;
    enum ProductoBazar;
};

#endif //_BAZAR_H