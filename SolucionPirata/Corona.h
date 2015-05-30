
#pragma once

#include "Elemento.h"
#include "Util.h"

class Corona : public Elemento {

protected:
	void imprimir(ostream &) const;

public:
	Corona(int);
	virtual ~Corona();
};
