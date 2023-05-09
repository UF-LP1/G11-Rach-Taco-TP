/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleado.h"


class Despachante: public Empleado { //falta constructor
public: 
    
Despachante(string Nombre,string Apellido, string Dni,unsigned int PrecioServicio,string Vehiculo,unsigned int CantPedidos);
    
/**
 * @param Clientes
 */
void despachar( Clientes);
    
string get_nombre();
    
string get_apellido();
    
string get_dni();
    
/**
 * @param unsigned int
 */
void set_precioservicio( unsigned int);
    
bool trabajoDespachar();
    
string get_vehiculo();
    
unsigned int get_cantPedidos();
    


    ~Despachante();
private: 
    
    string vehiculo;
    unsigned int cantPedidos;
 
};

#endif //_DESPACHANTE_H