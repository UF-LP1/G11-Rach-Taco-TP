


#include "Clientes.h"



Clientes:: Clientes(string nombre,string apellido,const string dni, string Hora_llegada,  string Dia_llegada,  string Direccion, list<Articulo>art, list<Herramientas> her, float cash): horaDeLlegada(Hora_llegada),diaDeLlegada(Dia_llegada),DNI(dni) {
    this->direccion = Direccion;
    this->Nombre = nombre;
    this->Apellido = apellido;
    this->dinero = cash;
    

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






string Clientes::get_horaDeLlegada() {
    return this->horaDeLlegada;
}


string Clientes::get_diaDeLlegada() {
    return this->diaDeLlegada;
}






string Clientes::get_direccion() {
    return this->direccion;
}



void Clientes::agregarart(Articulo art) {
    this->carritoart.push_back(art);

}
void Clientes::agregarher(Herramientas her) {
    this->carritoh.push_back(her);
    
}

list<Articulo> Clientes::get_carritoart() {
    return this->carritoart;
}


float Clientes::operator=(int code) {
    int i = 0;
    float price;
    list<Articulo>::iterator itArt = this->carritoart.begin();
   
    for (i = 0;i<this->get_carritoart().size(); itArt++, i++) {
        if (code == itArt->get_codigo()) {
            price = itArt->get_precio(); //me guardo el precio para calcular diferencia
            this->carritoart.erase(itArt);
            return price;
        }
    }
    cout << "No se encontro el articulo" << endl;
    return 0;
}

bool Clientes::checkearestado(int code) {
    int i = 0;
    bool estado;
    list<Articulo>::iterator itArt = this->carritoart.begin();

    for (i = 0; i < this->carritoart.size(); itArt++, i++) {
        if (code == itArt->get_codigo()) {
            estado = itArt->get_cambio();
            return estado;
        }
    }
    return false;
}

void Clientes::cambiarart() {
    Banyo ll = { 500,true,"buen estado","Banyo",true,235,180,"Cortina" };

    Cocina kk = { 10000,false,"Excelente","Cocina",true,632,70,"Horno" };

    Electricidad ii = { 3,false,"ok","electro",true,233,20,"enchufe" };

    ArtFerreteria oo = { 1,true,"ok","Art.Ferr",false,875,10,"tornillo" };

    bool estado=true;
    int opcion, opcion2, i = 0;
    float price=0, precionuevo=0;

    list<Articulo>::iterator itArt = this->carritoart.begin();

    cout << "Ingrese el codigo del objeto a cambiar:" << endl;

    for (i = 0; i < this->get_carritoart().size(); itArt++, i++) {
        cout << i << ")" << itArt->get_tipoDeProducto() << ", codigo:" << itArt->get_codigo() << endl;
    }
    cin >> opcion;
    
    estado = Clientes::checkearestado(opcion);
    if (estado == false) {

        cout << "No se puede cambiar ese producto" << endl;

        return;
    }
    else {
        price = Clientes::operator=(opcion);

        cout << "Opcion 1: Cortina" << "(codigo:235)" << endl;
        cout << "Opcion 2: horno" << "(codigo:632)" << endl;
        cout << "Opcion 3: enchufe" << "(codigo:233)" << endl;
        cout << "Opcion 4: tornillo" << "(codigo:875)" << endl;
        cout << "Opcion 5:salir" << endl;

        cout << "Ingrese su opcion: ";
        cin >> opcion2;


        switch (opcion2) {

        case 1:
            this->agregarart(ll);
            precionuevo = ll.get_precio();
            system("cls");
            break;
        case 2:
            this->agregarart(kk);
            precionuevo = kk.get_precio();
            system("cls");
            break;
        case 3:
            this->agregarart(ii);
            precionuevo = ii.get_precio();
            system("cls");
            break;
        case 4:
            this->agregarart(oo);
            precionuevo = oo.get_precio();
            system("cls");
            break;
        case 5:
            cout << "Gracias por comprar con nosotros" << endl;
            break;
        default:
            cout << "Seleccion invalida" << endl;
        }
        if (price > precionuevo) {
            this->dinero = this->dinero + (price - precionuevo);
            cout << "Se le devolvera" << price - precionuevo;
        }
        else if (price == precionuevo) {
            cout << "Es el mismo precio";
        }
        else {
            this->dinero = this->dinero + (price - precionuevo);
            cout << "Tendra que abonar " << abs(price - precionuevo) << endl;
        }
    }

}
float Clientes::generarPresupuesto()
{
   float presupuestoart=0;
   float presupuestoher = 0;
   float pretotal;
   int i=0,k=0;

   list<Articulo>::iterator itArt = this->carritoart.begin(); //igualo el iterador al principio de la lista
   list<Herramientas>::iterator itHer = this->carritoh.begin(); //igualo el iterador al principio de la lista
   
   for (i = 0; i < this->carritoart.size();i++,itArt++) { //recorro las listas y acumulo los precios
       string art = itArt->get_tipoDeProducto();
       if (itArt->get_stock() == true)
           presupuestoart = presupuestoart + itArt->get_precio();
       else
           cout << "No hay stock del Articulo numero:"<<++i<<"("<<art<<")"<<endl;
     
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

void Clientes::set_dinero(float cash) {
    this->dinero = cash;
}

float Clientes::get_dinero() {
    return this -> dinero;
}





 Clientes::~Clientes() {

}

 
 
