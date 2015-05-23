
#pragma once

#include "Tesoro.h"
#include "Util.h"

class Pirata {
private:
	int capacidad;
	int mejorGanancia;
	bool * mejorSolucion;

public:
	Pirata();
	virtual ~Pirata();

	void saquear(Tesoro);
	void saquearRec(Elemento **, bool *, int, int, int, int);
};
