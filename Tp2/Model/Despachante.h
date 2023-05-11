/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleado.h"


class Despachante: public Empleado { 
public: 
    
Despachante(string Nombre, string Apellido, const string Dni, unsigned int PrecioServicio, unsigned int salario, string Vehiculo, unsigned int CantPedidos);
    
void set_vehiculo(string vehi);
void set_cantidadPedidos(unsigned int cant);
    
void trabajar();
    
string get_vehiculo();
    
unsigned int get_cantPedidos();
    


    ~Despachante();
private: 
    
    string vehiculo;
    unsigned int cantPedidos;
 
};

#endif //_DESPACHANTE_H