


#ifndef _CLIENTES_H
#define _CLIENTES_H
#include <iostream>
#include <string>
using namespace std;
#include "Empleado.h"
#include "Articulo.h"
#include "Banyo.h"
#include "ArtFerreteria.h"
#include"Bazar.h"
#include "Electricidad.h"
#include "Cocina.h"
#include "Herramientas.h"
#include <list>
#include<iterator>



class Clientes {
public: 
    

Clientes(string nombre,string apellido,const string dni, string Hora_llegada ,  string Dia_llegada,  string Direccion, list<Articulo>art, list<Herramientas> her,float cash);


string get_nombre();
void set_nombre(string name);
string get_apellido();
void set_apellido(string ape);
string get_dni();

    
string get_horaDeLlegada();
    
string get_diaDeLlegada();
    

    
string get_direccion();
    
void mostrarFoto();
    
void mostrarArtRoto();

float generarPresupuesto();

float get_dinero();
void set_dinero( float cash);

    

void set_direccion( string dire);

void agregarart(Articulo art);
void agregarher(Herramientas her);

list<Articulo> get_carritoart();

float operator=(int code);

void cambiarart();
~Clientes();
private: 
    string Nombre;
    string Apellido;
    const string DNI;
    const string horaDeLlegada;
    const string diaDeLlegada;
    string direccion;
    list<Articulo>carritoart; 
    list<Herramientas>carritoh;
    float dinero;
    
   

};

#endif //_CLIENTES_H