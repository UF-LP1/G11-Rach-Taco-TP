


#ifndef _COCINA_H
#define _COCINA_H

#include "Articulo.h"


class Cocina: public Articulo {
public: 
    

Cocina(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo, string ProductoCocina);
    

    
void set_ProdCocina(string prod);
string get_ProductoCocina();

 ~Cocina();
private: 
    
    
    string ProductoCocina;
};

#endif //_COCINA_H