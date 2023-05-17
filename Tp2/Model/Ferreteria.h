


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include <iostream>
#include <string>

using namespace std;

class Ferreteria {
public: 
   
    

 Ferreteria( string Direcc,  bool abierto); //direccion puede cambiar asi que no es const
    

void set_direccion(string);
    
string get_direccion();
    
bool get_abierto();
void set_abierto(bool estado);
    


~Ferreteria();

    

private: 
    string direccion;
    bool abierto;
   
};

#endif //_FERRETERIA_H