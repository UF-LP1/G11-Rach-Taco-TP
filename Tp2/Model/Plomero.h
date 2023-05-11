/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleado.h"


class Plomero: public Empleado { 
public: 
    

 Plomero(string Nombre,  string Apellido, const string Dni,unsigned int precioservicio, unsigned int salario,bool arreglo,bool limpieza);
    
 
 void trabajar();

    

    
bool get_limpiezaTuberias();
    
bool get_mantenimientoTuberia();
 
    
    ~Plomero();
private: 

    bool ArregloTuberias;
    bool limpiezaTuberias;
};

#endif //_PLOMERO_H