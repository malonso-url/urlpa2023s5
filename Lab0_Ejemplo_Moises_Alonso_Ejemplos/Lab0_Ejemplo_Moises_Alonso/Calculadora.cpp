#include "Calculadora.h"

int Calculadora::suma(int sumando1, int sumando2) {
	return sumando1 + sumando2;
}

int Calculadora::resta(int minuendo, int sustraendo) {
	return minuendo - sustraendo;
}

int Calculadora::multiplicacion(int factor1, int factor2) {
	return factor1* factor2;
}

int Calculadora::cociente(int dividendo, int divisor) {
	return dividendo / divisor;
}

int Calculadora::residuo(int dividendo, int divisor) {
	return dividendo % divisor;
}

int Calculadora::potencia(int base, int exponente) {
	return System::Math::Pow(base, exponente);
}