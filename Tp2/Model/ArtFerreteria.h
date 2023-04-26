/**
 * Project Untitled
 */


#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Articulo.h"


class ArtFerreteria: public Articulo {
public: 
    
/**
 * @param string
 * @param bool
 */
void ArtFerreteria( string,  bool);
    
string get_tipoDeProducto();
    
bool get_stock();
    
enum get_ProductoFerreteria();
protected: 
    
void ArtFerreteria();
private: 
    const string tipoDeProducto;
    bool stock;
    enum ProductoFerreteria;
};

#endif //_ARTFERRETERIA_H