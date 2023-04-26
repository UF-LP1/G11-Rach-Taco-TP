/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleado.h"


class Cerrajero: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
void Cerrajero(void string, void string, void string, void unsigned int);
    
/**
 * @param Clientes
 */
void cerrajeria(void Clientes);
    
string get_nombre();
    
string get_apellido();
    
string get_dni();
    
/**
 * @param unsigned int
 */
void set_precioservicio(void unsigned int);
    
void trabajoCerrajeria();
    
string get_tipoDeLlave();
protected: 
    
void Cerrajero();
private: 
    const string nombre;
    const string apellido;
    const string dni;
    unsigned int precioservicio;
    string herramientasCerrajeria;
    string tipoDeLLave;
};

#endif //_CERRAJERO_H