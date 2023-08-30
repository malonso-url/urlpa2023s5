#pragma once
#include "FiguraGeometrica.h"
ref class Circulo :
    public FiguraGeometrica
{
private:
    double radio;

public:
    Circulo(double _radio) {
        setTipo(TIPO_CIRCULO);
        setRadio(_radio);
    }

    double CalcularArea() override;

    double CalcularPerimetro() override;

    void setRadio(double _radio);
    double getRadio();

};

