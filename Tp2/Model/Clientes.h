/**
 * Project Untitled
 */


#ifndef _CLIENTES_H
#define _CLIENTES_H
#include <iostream>
#include <string>
using namespace std;

class Clientes {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 */
void Clientes(void string, void string, void string);
    
/**
 * @param precio
 */
Articulo comprar(void precio);
    
/**
 * @param Articulo
 */
Articulo cambiar(void Articulo);
    
string get_horaDeLlegada();
    
string get_diaDeLlegada();
    
/**
 * @param Herramientas
 */
void alquilar(void Herramientas);
    
string get_direccion();
    
void mostrarFoto();
    
void mostrarArtRoto();
    
/**
 * @param string
 */
void set_direccion(void string);
protected: 
    
void Clientes();
private: 
    const string horaDeLlegada;
    const string diaDeLlegada;
    string direccion;
};

#endif //_CLIENTES_H