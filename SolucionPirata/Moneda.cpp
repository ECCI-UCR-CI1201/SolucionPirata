
#include "stdafx.h"
#include "Moneda.h"

Moneda::Moneda(int id) : Elemento(id) {
	this->valor = Util::random(Constantes::monedaValorMinimo, Constantes::monedaValorMaximo);
	this->peso = Util::random(Constantes::monedaPesoMinimo, Constantes::monedaPesoMaximo);
}

Moneda::~Moneda() {
}

void Moneda::imprimir(ostream & out) const {
	out << id << " Moneda Valor: " << valor << " Peso: "
		<< peso << endl;
}