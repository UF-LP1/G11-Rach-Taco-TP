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
void Herramientas( float, float, string, string);
    
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
unsigned int get_precioReal();
void set_precioReal(unsigned int);
protected: 
    
void Herramientas();
private: 
    float precioAlquiler;
    float precioSeguro;
    const string modelo;
    string condicion;
    unsigned int precioReal;
};

#endif //_HERRAMIENTAS_H