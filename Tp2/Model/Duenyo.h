/**
 * Project Untitled
 */


#ifndef _DUENYO_H
#define _DUENYO_H
#include <iostream>
#include <string>
using namespace std;
#include "Clientes.h"

class Duenyo { //falta constructor
public: 
    
 Duenyo();
    
/**
 * @param Clientes
 */
void atender_cliente( Clientes);
    
/**
 * @param Articulo
 */
float cobrar( Articulo);
    
/**
 * @param Herramientas
 */
float devolverSeguro( Herramientas);
    
/**
 * @param Clientes
 */
void identificarArticulo( Clientes);
    
/**
 * @param Clientes
 */
float devolverDif( Clientes);
    
string get_nombre();
    
string get_apellido();
    
string get_dni();
~Duenyo();
protected: 
    

private: 
    const string nombre;
    const string apellido;
    const string dni;
};

#endif //_DUENYO_H