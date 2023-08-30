#include "pch.h"
#include "Rectangulo.h"

double Rectangulo::GetLadoA() {
	return ladoA;
}

double Rectangulo::GetLadoB() {
	return ladoB;
}

void Rectangulo::SetLadoA(double _ladoA) {
	ladoA = _ladoA;
}

void Rectangulo::SetLadoB(double _ladoB) {
	ladoB = _ladoB;
}

double Rectangulo::CalcularArea() {
	return GetLadoA() * GetLadoB();
}

double Rectangulo::CalcularPerimetro() {
	return 2.00 * GetLadoA() + 2.00 * GetLadoB();
}