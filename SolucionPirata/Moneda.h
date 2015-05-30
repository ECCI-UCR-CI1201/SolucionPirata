
#pragma once

#include "Elemento.h"
#include "Util.h"

class Moneda : public Elemento {

protected:
	void imprimir(ostream &) const;

public:
	Moneda(int);
	virtual ~Moneda();
};

