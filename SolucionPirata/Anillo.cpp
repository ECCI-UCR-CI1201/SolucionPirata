
#include "stdafx.h"
#include "Anillo.h"

Anillo::Anillo(int id) : Elemento(id) {
	this->valor = Util::random(Constantes::anilloValorMinimo, Constantes::anilloValorMaximo);
	this->peso = Util::random(Constantes::anilloPesoMinimo, Constantes::anilloPesoMaximo);
}

Anillo::~Anillo() {
}

string Anillo::getNombre() const {
	return "Anillo";
}
