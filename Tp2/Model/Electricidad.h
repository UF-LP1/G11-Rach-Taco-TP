


#ifndef _ELECTRICIDAD_H
#define _ELECTRICIDAD_H

#include "Articulo.h"


class Electricidad: public Articulo {
public: 
    

Electricidad(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo,int tam, string productoDeElectricidad );
    
void set_ProdElec(string prod);
string get_ProductoElectricidad();

    
 ~Electricidad();
private: 
    
  
    string ProductoElectricidad;
};

#endif //_ELECTRICIDAD_H