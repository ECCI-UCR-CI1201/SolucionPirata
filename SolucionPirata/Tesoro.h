
#pragma once

#include "Elemento.h"
#include "Moneda.h"
#include "Collar.h"
#include "Corona.h"
#include "Anillo.h"
#include "Util.h"
#include "Constantes.h"

class Tesoro {

private:
	Elemento ** tesoros;
	int n;

public:
	Tesoro();
	virtual ~Tesoro();

	Elemento ** getTesoros();
	int getCantidadTesoros();
};
