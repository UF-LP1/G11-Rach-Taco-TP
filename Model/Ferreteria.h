/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H

class Ferreteria {
public: 
    void Attribute1;
    
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
protected: 
    
void Ferreteria();
private: 
    string direccion;
    bool abierto;
};

#endif //_FERRETERIA_H