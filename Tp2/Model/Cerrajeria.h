/**
 * Project Untitled
 */


#ifndef _CERRAJERIA_H
#define _CERRAJERIA_H

#include "Articulo.h"


class Cerrajeria: public Articulo {
public: 
    

Cerrajeria(string TipoDellave, bool Stock, string productoDeCerrajeria, float Precio, bool Cambio, string EstadoArticulo, string Tipodeproducto);
    
string get_tipoDeLlave();
    
bool get_stock();
    
string get_ProductoCerrajeria();

    
~Cerrajeria();
private: 
   
    string tipoDeLlave;
    
    string ProductoCerrajeria;
   
};

#endif //_CERRAJERIA_H