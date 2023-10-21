#pragma once
ref class Busqueda
{
public:
	int comparacionesBinarias;
	int comparacionesSecuencial;

	Busqueda() {
		comparacionesBinarias = 0;
		comparacionesSecuencial = 0;
	}

	int BusquedaSecuencial(array<int>^ numeros, int size, int valor_buscado) {
		for (int i = 0; i < size; i++) {
			comparacionesSecuencial++;
			if (numeros[i] == valor_buscado) {
				return i;
			}
		}
		return -1;
	}

	int BusquedaBinaria(array<int>^ numeros, int inf, int sup, int valor_buscado) {
		if (inf <= sup) {
			int pivote = (inf + sup) / 2;

			comparacionesBinarias++;
			if (numeros[pivote] == valor_buscado) {
				return pivote;
			}
			else if (numeros[pivote] > valor_buscado) {
				return BusquedaBinaria(numeros, inf, pivote - 1, valor_buscado);
			}
			else {
				return BusquedaBinaria(numeros, pivote + 1, sup, valor_buscado);
			}
		}

		return -1;
	}
};

