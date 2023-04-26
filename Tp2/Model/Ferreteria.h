/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H

class Ferreteria {
public: 
   
    
/**
 * @param string
 * @param bool
 */
void Ferreteria(void string, void bool);
    
/**
 * @param string
 */
void set_direccion(void string);
    
void get_direccion();
    
bool get_abierto();
    
int generarPresupuesto();
void set_precioAlquiler(unsigned int); 
unsigned int get_precioAlquiler(); 
protected: 
    
void Ferreteria();
private: 
    string direccion;
    bool abierto;
    unsigned int precioAlquiler;
};

#endif //_FERRETERIA_H