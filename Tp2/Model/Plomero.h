

#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleado.h"


class Plomero: public Empleado { 
public: 
    

 Plomero(string nombre, string apellido, const string dni, unsigned int precioservicio, unsigned int salario, bool arreglo, bool limpieza); 
    
 
 void trabajar(); //funcion polimorfica de Empleado

    
 void set_Limpieza(bool limp);
 void set_Arreglo(bool arreg);
    
bool get_limpiezaTuberias();
    
bool get_arregloTuberias();
 
    
    ~Plomero();
private: 

    bool ArregloTuberias;
    bool limpiezaTuberias;
};

#endif //_PLOMERO_H