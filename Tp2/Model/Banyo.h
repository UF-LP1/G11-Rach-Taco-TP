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
void Banyo( string,  bool);
    
string get_tipoDeProducto();
    
bool get_stock();
    
enum get_ProductoBanyo();
protected: 
    
void Banyo();
private: 
    const string tipoDeProducto;
    bool stock;
    enum ProductoBanyo;
};

#endif //_BANYO_H