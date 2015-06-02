#ifdef __CUBETA_H__
#define __CUBETA_H__

class Cubeta {

    private: 
    /* Estado interno*/
    double capacidad;
    double nivel;

    public:
    /*acciones */
    double carga(double cantidad);
    double extraer(double cantidad);
    double get_nivel();

};

Cubeta a.b;
