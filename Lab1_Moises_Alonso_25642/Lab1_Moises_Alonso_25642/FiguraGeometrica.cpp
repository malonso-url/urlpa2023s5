#include "pch.h"
#include "FiguraGeometrica.h"

int FiguraGeometrica::GetTipo() {
	return tipo;
}

void FiguraGeometrica::setTipo(int _tipo) {
	tipo = _tipo;
}

double FiguraGeometrica::CalcularArea() {
	return 0;
}

double FiguraGeometrica::CalcularPerimetro() {
	return 0;
}