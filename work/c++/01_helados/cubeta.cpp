#include "cubeta.h"

/* Sobrecarga con el constructor */
Cubeta::Cubeta() : nivel(0)
{
}

Cubeta::Cubeta(double nivel) : nivel
{
    return this->nivel;
}

double
Cubeta::get_nivel()
{
    return this->nivel;
}

double
Cubeta::cargar(double cantidad)
{
    this->nivel += cantidad;
}
double
Cubeta::extraer(double cantidad)
{
    this->nivel -= cantidad;
}
