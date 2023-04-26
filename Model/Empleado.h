/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

class Empleado {
public: 
    
void get_nombrestring();
    
string get_apellido();
    
string get_dni();
    
/**
 * @param unsigned int
 */
void set_precioservicio(void unsigned int);
private: 
    string nombre;
    string apellido;
    const string dni;
    unsigned int precioservicio;
};

#endif //_EMPLEADO_H