
#include "stdafx.h"
#include "Elemento.h"

Elemento::~Elemento() {
}

int Elemento::getValor() {
	return valor;
}

int Elemento::getPeso() {
	return peso;
}

Elemento::Elemento(int id) :
id(id), valor(0), peso(0) {
}

ostream& operator<<(ostream& out, const Elemento & e) {
	e.imprimir(out);
	return out;
}

