/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleado.h"


class Plomero: public Empleado { //corregir contructor
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 Plomero( string,  string,  string,  unsigned int);
    
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
    const string nombre;
    const string apellido;
    const string dni;
    unsigned int precioservicio;
    string herramientasPlomeria;
    string mantenimientoTuberias;
    string limpiezaTuberias;
};

#endif //_PLOMERO_H