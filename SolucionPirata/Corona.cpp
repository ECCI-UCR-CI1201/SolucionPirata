
#include "stdafx.h"
#include "Corona.h"

Corona::Corona(int id) : Elemento(id) {
	this->valor = Util::random(Constantes::coronaValorMinimo, Constantes::coronaValorMaximo);
	this->peso = Util::random(Constantes::coronaPesoMinimo, Constantes::coronaPesoMaximo);
}

Corona::~Corona() {
}

void Corona::imprimir(ostream & out) const {
	out << id << " Corona Valor: " << valor << " Peso: "
		<< peso << endl;
}
