/**
 * Project Untitled
 */


#include "ArtFerreteria.h"

/**
 * ArtFerreteria implementation
 */


/**
 * @param string
 * @param bool
 */
ArtFerreteria::ArtFerreteria(string TipoDeProducto, bool Stock, enum productoDeFerreteria, float Precio, bool Cambio, const string EstadoArticulo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {

}

/**
 * @return string
 */
string ArtFerreteria::get_tipoDeProducto() {
    return "";
}

/**
 * @return bool
 */
bool ArtFerreteria::get_stock() {
    return false;
}

/**
 * @return enum
 */
enum ArtFerreteria::get_ProductoFerreteria() {
    return null;
}

void ArtFerreteria::ArtFerreteria() {

}