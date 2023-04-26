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
void Cocina(void string, void bool);
    
string get_tipoDeRespuesta();
    
bool get_stock();
    
enum get_ProductoCocina();
protected: 
    
void Cocina();
private: 
    const string tipoDeRepuesto;
    bool stock;
    enum ProductoCocina;
};

#endif //_COCINA_H