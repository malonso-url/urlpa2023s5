#pragma once
ref class Node
{
	
public:
	Node(int dato) {
		this->dato = dato;
		next = nullptr;
	}

	int dato;
	Node^ next;
};

