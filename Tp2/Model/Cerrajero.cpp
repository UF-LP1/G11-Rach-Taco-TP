

#include "Cerrajero.h"


 Cerrajero::Cerrajero( string Nombre,  string Apellido,  string Dni,unsigned int precioservicio,unsigned int salario,  unsigned int Precio, string tipollave):Empleado( Nombre,  Apellido,   Dni,   precioservicio, salario) { //no se xq me sale error aca
     this->nombre = Nombre;
     this->apellido = Apellido;
     

}





 void Cerrajero::trabajar()
 {

 }

 string Cerrajero::get_tipoDeLlave() {
    return this->tipoDeLLave;
}

 Cerrajero::~Cerrajero() {

}