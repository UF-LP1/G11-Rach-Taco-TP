


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
    

Clientes( string Hora_llegada ,  string Dia_llegada,  string Direccion, list<Articulo>art, list<Herramientas> her);

Articulo cambiar( Articulo);
    
string get_horaDeLlegada();
    
string get_diaDeLlegada();
    


    
string get_direccion();
    
void mostrarFoto();
    
void mostrarArtRoto();
float generarPresupuesto();

    

void set_direccion( string dire);

void agregarart(Articulo art);
void agregarher(Herramientas her);

    
~Clientes();
private: 
    const string horaDeLlegada;
    const string diaDeLlegada;
    string direccion;
    list<Articulo>carritoart; 
    list<Herramientas>carritoh;
   

};

#endif //_CLIENTES_H