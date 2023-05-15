

#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H
#include <iostream>
#include <string>
using namespace std;

class Herramientas {
public: 
    

Herramientas(float PrecioAlquiler, float PrecioSeguro, const string Modelo, string Condicion, unsigned int horasalq);
    
string get_condicion();
    
float get_precioAlquiler();
    
float get_precioSeguro();
    
string get_modelo();
unsigned int get_HorasDeAlquiler();

    

void set_precioAlquiler( float prec);
void set_condicion(string cond);
void set_HorasDeAlquiler(unsigned int horas);

void set_precioSeguro(float precseg);
~Herramientas();


private: 
    float precioAlquiler;
    float precioSeguro;
    const string modelo;
    string condicion;
    unsigned int HorasDeAlquiler;
    
};

#endif //_HERRAMIENTAS_H