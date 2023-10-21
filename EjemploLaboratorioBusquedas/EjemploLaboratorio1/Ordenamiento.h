#pragma once
ref class Ordenamiento
{
public:
	static array<int>^ bubbleSort(array<int>^ numeros, int size) {
		//array<int>^ temp = gcnew array<int>(size);

		for (int i = 0; i < size - 1; i++) {
			for (int j = i + 1; j < size; j++) {
				if (numeros[i] > numeros[j]) {
					int temp = numeros[i];
					numeros[i] = numeros[j];
					numeros[j] = temp;
				}
			}
		}

		return numeros;
	}
};

