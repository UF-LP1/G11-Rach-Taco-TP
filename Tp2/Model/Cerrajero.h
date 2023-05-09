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
 * @param unsigned int
 * @param string
 */
    Cerrajero(string Nombre, string Apellido, string Dni, unsigned int Precio, string tipollave): dni(Dni);
    
/**
 * @param Clientes
 */
void  cerrajeria( Clientes);
    
string get_nombre();
    
string get_apellido();
    
string get_dni();
    
/**
 * @param unsigned int
 */
void set_precioservicio( unsigned int);
    
void trabajoCerrajeria();
    
string get_tipoDeLlave();

    
    ~Cerrajero();
private: 
   
    

    string tipoDeLLave;
};

#endif //_CERRAJERO_H