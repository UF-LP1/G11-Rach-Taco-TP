

#ifndef _DUENYO_H
#define _DUENYO_H
#include <iostream>
#include <string>
using namespace std;
#include "Clientes.h"

class Duenyo { 
public: 
    
 Duenyo(string nombre, string apellido,const string dni, static int cantc);
    

void atender_cliente( Clientes cli);
    
string get_nombre();
    
string get_apellido();

static int get_cantclientes();
    
string get_dni();
void set_nombre(string name);
void set_apellido(string ape);
~Duenyo();

    

private: 
     string Nombre;
     string Apellido;
    const string dni;
    static int cantclientes;
};

#endif //_DUENYO_H