/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H
#include <iostream>
#include <string>
using namespace std;

class Empleado {
public:

    void get_nombrestring();

    string get_apellido();

    string get_dni();
    unsigned int get_salario();
    void set_salario(unsigned int);

    /**
     * @param unsigned int
     */
    void set_precioservicio(void unsigned int);
private:
    string nombre;
    string apellido;
    const string dni;
    unsigned int precioservicio;
    unsigned int salario;
}

};

#endif //_EMPLEADO_H