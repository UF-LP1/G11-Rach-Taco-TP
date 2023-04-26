/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleado.h"


class Despachante: public Empleado {
public: 
    
void Despachante();
    
/**
 * @param Clientes
 */
void despachar(void Clientes);
    
string get_nombre();
    
string get_apellido();
    
string get_dni();
    
/**
 * @param unsigned int
 */
void set_precioservicio(void unsigned int);
    
bool trabajoDespachar();
    
string get_vehiculo();
    
unsigned int get_cantPedidos();
    
enum get_direcciones();
protected: 
    
void Despachante();
private: 
    const string nombre;
    const string apellido;
    const string dni;
    unsigned int precioservicio;
    string vehiculo;
    unsigned int cantPedidos;
    enum direcciones;
};

#endif //_DESPACHANTE_H