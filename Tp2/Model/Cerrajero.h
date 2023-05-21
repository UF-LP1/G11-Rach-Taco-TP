


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleado.h"



class Cerrajero: public Empleado {
public: 
    

Cerrajero(string Nombre, string Apellido, const string Dni,unsigned int precioservicio, unsigned int salario, string tipollave);
    


    
void trabajar(); //metodo polimorfico de Empleado
    

    
string get_tipoDeLlave();

void set_tipoDeLLave(string llave);
    
    ~Cerrajero();
private: 
   
    

    string tipoDeLLave;
};

#endif //_CERRAJERO_H