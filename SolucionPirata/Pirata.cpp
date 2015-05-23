
#include "stdafx.h"
#include "Pirata.h"

Pirata::Pirata() {
	capacidad = Util::random(Constantes::pirataCapacidadMinima,
			Constantes::pirataCapacidadMaxima);
	mejorGanancia = 0;
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
	archivo << "Capacidad: " << capacidad << endl;
	archivo << "Ganancia: " << mejorGanancia << endl;
	archivo.close();

	delete solucion;
}

void Pirata::saquearRec(Elemento** tesoros, bool* solucion, int n, int actual,
		int pesoActual, int gananciaActual) {

	if (gananciaActual > mejorGanancia) {
		delete mejorSolucion;
		mejorSolucion = Util::copyVector(solucion, n);
		mejorGanancia = gananciaActual;
	}

	if (actual < n) {
		for (int i = 0; i < 2; ++i) {
			solucion[actual] = i % 2 == 0;
			int nuevoPeso = pesoActual + tesoros[actual]->getPeso();
			int nuevaGanancia = gananciaActual + tesoros[actual]->getValor();
			if (nuevoPeso <= capacidad) {
				saquearRec(tesoros, solucion, n, actual + 1, nuevoPeso,
						nuevaGanancia);
			}
		}
	}

}
