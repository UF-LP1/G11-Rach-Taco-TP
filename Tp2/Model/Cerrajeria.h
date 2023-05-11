/**
 * Project Untitled
 */


#ifndef _CERRAJERIA_H
#define _CERRAJERIA_H

#include "Articulo.h"


class Cerrajeria: public Articulo {
public: 
    

Cerrajeria(float Precio, bool Cambio, string EstadoArticulo, string tipodeProducto, bool Stock, string TipoDeLlave, string productoDeCerrajeria);
    
string get_tipoDeLlave();
    
    
string get_ProductoCerrajeria();

    
~Cerrajeria();
private: 
   
    string tipoDeLlave;
    
    string ProductoCerrajeria;
   
};

#endif //_CERRAJERIA_H