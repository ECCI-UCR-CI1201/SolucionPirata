
#include "stdafx.h"
#include "Tesoro.h"

Tesoro::Tesoro() {
	int nMoneda = Util::random(Constantes::monedaCantidadMinima,
			Constantes::monedaCantidadMaxima);
	int nCollar = Util::random(Constantes::collarCantidadMinima,
			Constantes::collarCantidadMaxima);
	int nCorona = Util::random(Constantes::coronaCantidadMinima,
			Constantes::coronaCantidadMaxima);
	int nAnillo = Util::random(Constantes::anilloCantidadMinima,
			Constantes::anilloCantidadMaxima);

	n = nMoneda + nCollar + nCorona + nAnillo;

	tesoros = new Elemento *[n];
	ofstream archivo("tesoro.txt");

	for (int i = 0; i < n; ++i) {
		if (i < nMoneda) {
			tesoros[i] = new Moneda(i);
		} else if (i < nMoneda + nCollar) {
			tesoros[i] = new Collar(i);
		} else if (i < nMoneda + nCollar + nCorona) {
			tesoros[i] = new Corona(i);
		} else if (i < nMoneda + nCollar + nCorona + nAnillo) {
			tesoros[i] = new Anillo(i);
		}
		archivo << *tesoros[i];
	}

	archivo.close();

}

Tesoro::~Tesoro() {

}

Elemento** Tesoro::getTesoros() {
	return tesoros;
}

int Tesoro::getCantidadTesoros() {
	return n;
}
