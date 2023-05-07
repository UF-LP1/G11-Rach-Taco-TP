/**
 * Project Untitled
 */


#ifndef _CERRAJERIA_H
#define _CERRAJERIA_H

#include "Articulo.h"


class Cerrajeria: public Articulo {
public: 
    

Cerrajeria(string TipoDellave, bool Stock, string productoDeCerrajeria, float Precio, bool Cambio, string EstadoArticulo);
    
string get_tipoDeLlave();
    
bool get_stock();
    
string get_ProductoCerrajeria();
protected: 
    
~Cerrajeria();
private: 

    string tipoDeLlave;
    bool stock;
    string ProductoCerrajeria;
   
};

#endif //_CERRAJERIA_H