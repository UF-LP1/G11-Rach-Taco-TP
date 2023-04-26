/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

class Herramientas {
public: 
    
/**
 * @param float
 * @param float
 * @param string
 * @param string
 */
void Herramientas(void float, void float, void string, void string);
    
string get_condicion();
    
float get_precioAlquiler();
    
float get_precioSeguro();
    
string get_modelo();
    
/**
 * @param float
 */
void set_precioAlquiler(void float);
    
/**
 * @param float
 */
void set_precioSeguro(void float);
protected: 
    
void Herramientas();
private: 
    float precioAlquiler;
    float precioSeguro;
    const string modelo;
    string condicion;
};

#endif //_HERRAMIENTAS_H