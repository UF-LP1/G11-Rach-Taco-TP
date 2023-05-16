


#include "Clientes.h"



Clientes:: Clientes(string nombre,string apellido,const string dni, string Hora_llegada,  string Dia_llegada,  string Direccion, list<Articulo>art, list<Herramientas> her): horaDeLlegada(Hora_llegada),diaDeLlegada(Dia_llegada),DNI(dni) {
    this->direccion = Direccion;
    this->Nombre = nombre;
    this->Apellido = apellido;

}

string Clientes::get_nombre() {
    return this->Nombre;
}
void Clientes::set_nombre(string nom) {
    this->Nombre = nom;
}
string Clientes::get_apellido() {
    return this->Apellido;
}
void Clientes::set_apellido(string ape) {
    this->Apellido = ape;
}
string Clientes::get_dni() {
    return this->DNI;
}



Articulo Clientes::cambiar( Articulo ar) {
    return ar;
}


string Clientes::get_horaDeLlegada() {
    return this->horaDeLlegada;
}


string Clientes::get_diaDeLlegada() {
    return this->diaDeLlegada;
}




string Clientes::get_direccion() {
    return this->direccion;
}


void Clientes::mostrarFoto() {
    return;
}


void Clientes::mostrarArtRoto() {
    return;
}
void Clientes::agregarart(Articulo art) {
    this->carritoart.push_back(art);

}
void Clientes::agregarher(Herramientas her) {
    this->carritoh.push_back(her);
    
}

float Clientes::generarPresupuesto()
{
   float presupuestoart=0;
   float presupuestoher = 0;
   float pretotal;
   int i=0,k=0;

   list<Articulo>::iterator itArt = this->carritoart.begin(); //igualo el iterador al principio de la lista
   list<Herramientas>::iterator itHer = this->carritoh.begin(); //igualo el iterador al principio de la lista
   
   for (i = 0; i < this->carritoart.size();i++) { //recorro las listas y acumulo los precios
       string art = itArt->get_tipoDeProducto();
       if (itArt->get_stock() == true)
           presupuestoart = presupuestoart + itArt->get_precio();
       else
           cout << "No hay stock del Articulo numero:"<<i<<"("<<art<<")"<<endl;
       itArt++;
   };
   for (k = 0; k < this->carritoh.size(); k++) {
       int horas = itHer->get_HorasDeAlquiler();
    
       presupuestoher = presupuestoher + (itHer->get_precioAlquiler() *horas )+ itHer->get_precioSeguro(); //multiplico el precio por las horas alquiladas
       itHer++;
   }
   pretotal = presupuestoart + presupuestoher;
    return pretotal;
}


void Clientes::set_direccion( string Direc) {
    this->direccion=Direc;
}


 Clientes::~Clientes() {

}