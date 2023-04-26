/**
 * Project Untitled
 */


#ifndef _CLIENTES_H
#define _CLIENTES_H
#include <iostream>
#include <string>
using namespace std;
#include "Empleado.h"
#include "Articulo.h"
#include "Herramientas.h"
#include <list>


class Clientes {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 */
void Clientes( string,  string,  string);
    
/**
 * @param precio
 */
Articulo comprar( precio);
    
/**
 * @param Articulo
 */
Articulo cambiar( Articulo);
    
string get_horaDeLlegada();
    
string get_diaDeLlegada();
    
/**
 * @param Herramientas
 */
void alquilar( Herramientas);
    
string get_direccion();
    
void mostrarFoto();
    
void mostrarArtRoto();
float generarPresupuesto();

    
/**
 * @param string
 */
void set_direccion( string);
protected: 
    
void Clientes();
private: 
    const string horaDeLlegada;
    const string diaDeLlegada;
    string direccion;
    list<Articulo>carritoart; 
    list<Herramientas>carritoh;
    int fin_cart;
    int fin_cher;

};

#endif //_CLIENTES_H