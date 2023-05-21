


#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Articulo.h"


class ArtFerreteria: public Articulo {
public: 
ArtFerreteria(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo,int tam, string prouctodeFerreteria);

    

void set_ProdFerreteria(string prod);
string get_ProductoFerreteria();

    
~ ArtFerreteria();
private: 
  
   
    string ProductoFerreteria;
};

#endif //_ARTFERRETERIA_H