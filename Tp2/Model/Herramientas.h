/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H
#include <iostream>
#include <string>
using namespace std;

class Herramientas {
public: 
    
/**
 * @param float
 * @param float
 * @param string
 * @param string
 */
Herramientas(float PrecioAlquiler, float PrecioSeguro, const string Modelo, string Condicion, unsigned int PrecioReal);
    
string get_condicion();
    
float get_precioAlquiler();
    
float get_precioSeguro();
    
string get_modelo();
    
/**
 * @param float
 */
void set_precioAlquiler( float);
    
/**
 * @param float
 */
void set_precioSeguro(float);

protected: 
    
~Herramientas();
private: 
    float precioAlquiler;
    float precioSeguro;
    const string modelo;
    string condicion;
    
};

#endif //_HERRAMIENTAS_H