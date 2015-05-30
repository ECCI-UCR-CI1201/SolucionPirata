
#include "stdafx.h"
#include "Pirata.h"

Pirata::Pirata() {
	capacidad = Util::random(Constantes::pirataCapacidadMinima,
		Constantes::pirataCapacidadMaxima);
	mejorGanancia = 0;
	capacidadAlcanzada = 0;
	mejorSolucion = 0;
}

Pirata::~Pirata() {
	if (mejorSolucion != 0) {
		delete mejorSolucion;
	}
}

void Pirata::saquear(Tesoro t) {

	int n = t.getCantidadTesoros();
	Elemento ** tesoros = t.getTesoros();

	bool * solucion = new bool[n];
	mejorSolucion = new bool[n];

	for (int i = 0; i < n; ++i) {
		solucion[i] = false;
		mejorSolucion[i] = false;
	}

	saquearRec(tesoros, solucion, n, 0, 0, 0);

	ofstream archivo("pirata.txt");
	for (int i = 0; i < n; ++i) {
		if (mejorSolucion[i]) {
			archivo << *tesoros[i];
		}
	}
	archivo << "Capacidad Maxima: " << capacidad << endl;
	archivo << "Capacidad Alcanzada: " << capacidadAlcanzada << endl;
	archivo << "Ganancia: " << mejorGanancia << endl;
	archivo.close();

	delete solucion;
}

void Pirata::saquearRec(Elemento** tesoros, bool* solucion, int n, int actual,
	int pesoActual, int gananciaActual) {

	if (mejorGanancia < gananciaActual && pesoActual < capacidad) {
		delete mejorSolucion;
		mejorSolucion = Util::copyVector(solucion, n);
		capacidadAlcanzada = pesoActual;
		mejorGanancia = gananciaActual;
	}

	if (actual < n) {

		// No tomar el elemento
		saquearRec(tesoros, solucion, n, actual + 1, pesoActual,
			gananciaActual);

		// Tomar el elemento
		int nuevoPeso = pesoActual + tesoros[actual]->getPeso();
		int nuevaGanancia = gananciaActual + tesoros[actual]->getValor();
		solucion[actual] = true;
		saquearRec(tesoros, solucion, n, actual + 1, nuevoPeso,
			nuevaGanancia);

		// Dejarlo sin tomar para el llamado anterior
		solucion[actual] = false;
	}

}
