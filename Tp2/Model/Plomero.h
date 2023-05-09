/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleado.h"


class Plomero: public Empleado { //corregir contructor
public: 
    

 Plomero( string Nombre,  string Apellido,  string Dni,  unsigned int Precio,bool arreglo,bool limpieza);
    
string get_nombre();
    
string get_apellido();
    
string get_dni();
    
/**
 * @param unsigned int
 */
void set_precioservicio( unsigned int);
    
void trabajoPlomeria();
    
string get_limpiezaTuberias();
    
string get_mantenimientoTuberia();
 
    
    ~Plomero();
private: 

    bool ArregloTuberias;
    bool limpiezaTuberias;
};

#endif //_PLOMERO_H