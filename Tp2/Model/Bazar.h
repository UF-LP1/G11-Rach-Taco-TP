


#ifndef _BAZAR_H
#define _BAZAR_H

#include "Articulo.h"


class Bazar: public Articulo {
public: 
    

Bazar(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo,int tam, string prouctodeBazar);
    

void set_ProdBazar(string prod);

string get_ProductoBazar();

    
~ Bazar();
private: 
     
   
    string ProductoBazar;
};

#endif //_BAZAR_H