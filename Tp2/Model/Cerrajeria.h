/**
 * Project Untitled
 */


#ifndef _CERRAJERIA_H
#define _CERRAJERIA_H

#include "Articulo.h"


class Cerrajeria: public Articulo {
public: 
    
/**
 * @param string
 * @param bool
 */
void Cerrajeria( string,  bool);
    
string get_tipoDeLlave();
    
bool get_stock();
    
enum get_ProductoCerrajeria();
protected: 
    
void Cerrajeria();
private: 
    const string tipoDeLlave;
    bool stock;
    void ProductoCerrajeria;
   
};

#endif //_CERRAJERIA_H