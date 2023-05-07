/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include "Clientes.h"

class Empleado { //falta constructor y destructor
public:
    Empleado(string name, string Apellido, const string Dni, unsigned int PrecioServicio, unsigned int Salario);

    string get_nombre();

    string get_apellido();

    string get_dni();
    unsigned int get_salario();
    void set_salario(unsigned int);

    /**
     * @param unsigned int
     */
    void set_precioservicio(unsigned int);
    ~Empleado();
    friend class Plomero;
    friend class Cerrajero;
    friend class Despachante;
private:
    string nombre;
    string apellido;
    const string dni;
    unsigned int precioservicio;
    unsigned int salario;
};



#endif //_EMPLEADO_H