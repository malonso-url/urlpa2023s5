#pragma once
#include "FiguraGeometrica.h"
ref class Rectangulo :
    public FiguraGeometrica
{
private:
    double ladoA;
    double ladoB;

public:
    Rectangulo(double _ladoA, double _ladoB) {

        setTipo(TIPO_RECTANGULO);
        SetLadoA(_ladoA);
        SetLadoB(_ladoB);
    }

    void SetLadoA(double _ladoA);
    double GetLadoA();

    void SetLadoB(double _ladoB);
    double GetLadoB();

    double CalcularArea() override;

    double CalcularPerimetro() override;
};

