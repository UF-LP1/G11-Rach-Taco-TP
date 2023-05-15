

#ifndef _DUENYO_H
#define _DUENYO_H
#include <iostream>
#include <string>
using namespace std;
#include "Clientes.h"

class Duenyo { 
public: 
    
 Duenyo(string nombre, string apellido,const string dni);
    

void atender_cliente( Clientes cli);
    

float cobrar( Clientes cli);
    

float devolverSeguro( Herramientas her, Clientes cli) ;
    

void identificarArticulo( Clientes cli);
    

    
string get_nombre();
    
string get_apellido();
    
string get_dni();
void set_nombre(string name);
void set_apellido(string ape);
~Duenyo();

    

private: 
     string Nombre;
     string Apellido;
    const string dni;
};

#endif //_DUENYO_H