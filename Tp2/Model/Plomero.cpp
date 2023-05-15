


#include "Plomero.h"


Plomero::Plomero(string nombre, string apellido,const string dni, unsigned int precioservicio, unsigned int salario, bool arreglo,bool limpieza) :Empleado(nombre, apellido, dni, precioservicio, salario) {
    {
        this->ArregloTuberias = arreglo;
        this->limpiezaTuberias = limpieza;



}





    void Plomero::trabajar()
    {

    }



bool Plomero::get_limpiezaTuberias() {
    return this->limpiezaTuberias;
}

bool Plomero::get_mantenimientoTuberia() {
    return this ->mantenimientoTuberias;
}

 Plomero::~Plomero() {

}