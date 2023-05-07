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
#include<iterator>



class Clientes {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 */
Clientes( string Hora_llegada ,  string Dia_llegada,  string Direccion, list<Articulo>art, list<Herramientas> her);
    
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
float generarPresupuesto(list<Articulo> art, list<Herramientas> her);

    
/**
 * @param string
 */
void set_direccion( string);

list<Articulo> agregarprod(Articulo, list<Articulo>);
list <Herramientas> agregarher(Herramientas, list<Herramientas>);

    
~Clientes();
private: 
    const string horaDeLlegada;
    const string diaDeLlegada;
    string direccion;
    list<Articulo>carritoart; 
    list<Herramientas>carritoh;
   

};

#endif //_CLIENTES_H