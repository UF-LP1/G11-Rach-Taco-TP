/**
 * Project Untitled
 */


#ifndef _DUENYO_H
#define _DUENYO_H
#include <iostream>
#include <string>
using namespace std;

class Duenyo {
public: 
    
void Duenyo();
    
/**
 * @param Clientes
 */
void atender_cliente(void Clientes);
    
/**
 * @param Articulo
 */
float cobrar(void Articulo);
    
/**
 * @param Herramientas
 */
float devolverSeguro(void Herramientas);
    
/**
 * @param Clientes
 */
void identificarArticulo(void Clientes);
    
/**
 * @param Clientes
 */
float devolverDif(void Clientes);
    
string get_nombre();
    
string get_apellido();
    
string get_dni();
protected: 
    
void Duenyo();
private: 
    const string nombre;
    const string apellido;
    const string dni;
};

#endif //_DUENYO_H