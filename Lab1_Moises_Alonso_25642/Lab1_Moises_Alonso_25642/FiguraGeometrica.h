#pragma once
ref class FiguraGeometrica
{
protected:
	int tipo;
	void setTipo(int _tipo);

public:
	static int TIPO_CIRCULO = 0;
	static int TIPO_RECTANGULO = 1;
	virtual double CalcularArea();
	virtual double CalcularPerimetro();
	int GetTipo();
};

