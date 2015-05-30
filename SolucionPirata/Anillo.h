
#pragma once

#include "Elemento.h"
#include "Util.h"

class Anillo : public Elemento {

protected:
	void imprimir(ostream &) const;

public:
	Anillo(int);
	virtual ~Anillo();
};

