


#ifndef _EMPLEADO_H
#define _EMPLEADO_H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Empleado { 
public:
    Empleado(string name, string Apellido,const string Dni, unsigned int PrecioServicio, unsigned int Salario);

    string get_nombre();

    string get_apellido();

    string get_dni();
    unsigned int get_salario();

    void set_nombre(string nom);
    void set_apellido(string ape);
    void set_salario(unsigned int sal);

    unsigned int get_precioservicio();
    void set_precioservicio(unsigned int pserv);

    virtual void trabajar();

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