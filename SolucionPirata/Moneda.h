
#pragma once

#include "Elemento.h"
#include "Util.h"

class Moneda : public Elemento {
public:
	Moneda(int);
	virtual ~Moneda();

	string getNombre() const;
};

