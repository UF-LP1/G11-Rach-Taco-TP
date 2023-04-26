/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleado.h"


class Plomero: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
void Plomero(void string, void string, void string, void unsigned int);
    
string get_nombre();
    
string get_apellido();
    
string get_dni();
    
/**
 * @param unsigned int
 */
void set_precioservicio(void unsigned int);
    
void trabajoPlomeria();
    
string get_limpiezaTuberias();
    
string get_mantenimientoTuberia();
protected: 
    
void Plomero();
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