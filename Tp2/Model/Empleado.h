/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H
#include <iostream>
#include <string>
using namespace std;
#include "Clientes.h"

class Empleado { //falta constructor y destructor
public:

    string get_nombre();

    string get_apellido();

    string get_dni();
    unsigned int get_salario();
    void set_salario(unsigned int);

    /**
     * @param unsigned int
     */
    void set_precioservicio( unsigned int);
    ~Empleado();
private:
    string nombre;
    string apellido;
    const string dni;
    unsigned int precioservicio;
    unsigned int salario;
}

};

#endif //_EMPLEADO_H