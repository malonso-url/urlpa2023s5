#include "CalculadoraCpp.h"

void CalculadoraCpp::suma(int sumando1, int sumando2, int% resultado) {
	resultado = sumando1 + sumando2;
}

void CalculadoraCpp::cambiarPuntos(int% p1, int% p2, int% p3) {
	System::DateTime^ actualDate = System::DateTime::Now;
	int seed = actualDate->Millisecond;

	System::Random^ rnd = gcnew System::Random(seed);

	p1 = rnd->Next();
	p2 = rnd->Next();
	p3 = rnd->Next();
}