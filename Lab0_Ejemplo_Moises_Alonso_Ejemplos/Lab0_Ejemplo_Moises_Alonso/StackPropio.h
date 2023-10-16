#pragma once
#include "Node.h"
ref class StackPropio
{
public:
	Node^ start;
	int count;

	StackPropio() {
		count = 0;
		start = nullptr;
	}

	void Push(int value);
	int Pop();
	int Peek();
	bool isEmpty();
};

