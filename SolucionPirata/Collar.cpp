
#include "stdafx.h"
#include "Collar.h"

Collar::Collar(int id) : Elemento(id) {
	this->valor = Util::random(Constantes::collarValorMinimo, Constantes::collarValorMaximo);
	this->peso = Util::random(Constantes::collarPesoMinimo, Constantes::collarPesoMaximo);
}

Collar::~Collar() {
}

void Collar::imprimir(ostream & out) const {
	out << id << " Collar Valor: " << valor << " Peso: "
		<< peso << endl;
}
