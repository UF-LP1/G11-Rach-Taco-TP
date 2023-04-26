/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include <iostream>
#include <string>
using namespace std;

class Ferreteria {
public: 
   
    
/**
 * @param string
 * @param bool
 */
void Ferreteria( string,  bool);
    
/**
 * @param string
 */
void set_direccion(string);
    
void get_direccion();
    
bool get_abierto();
    

void set_precioAlquiler(unsigned int); 
unsigned int get_precioAlquiler(); 
protected: 
    

private: 
    string direccion;
    bool abierto;
    unsigned int precioAlquiler;
};

#endif //_FERRETERIA_H