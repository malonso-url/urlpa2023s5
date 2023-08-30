#include "pch.h"
#include "Circulo.h"

double Circulo::CalcularArea() {
	return System::Math::PI * getRadio() * getRadio();
}

double Circulo::CalcularPerimetro() {
	return System::Math::PI * getRadio() * 2.00;
}

void Circulo::setRadio(double _radio) {
	radio = _radio;
}

double Circulo::getRadio() {
	return radio;
}

