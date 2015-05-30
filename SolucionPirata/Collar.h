
#pragma once

#include "Elemento.h"
#include "Util.h"

class Collar : public Elemento {

protected:
	void imprimir(ostream &) const;

public:
	Collar(int);
	virtual ~Collar();
};
