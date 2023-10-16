#include "StackPropio.h"

void StackPropio::Push(int value) {
	Node^ newNode = gcnew Node(value);
	if (isEmpty()) {
		start = newNode;
	}
	else {
		newNode->next = start;
		start = newNode;
	}
	count++;
}

bool StackPropio::isEmpty() {
	return count == 0;
}

int StackPropio::Pop() {
	if (!isEmpty()) {
		Node^ temp = start;
		start = start->next;
		count--;
		return temp->dato;
	}
	return -1;
}

int StackPropio::Peek() {
	if (!isEmpty()) {
		return start->dato;
	}
	return -1;
}