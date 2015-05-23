
#pragma once

#include "Elemento.h"
#include "Util.h"

class Anillo : public Elemento {
public:
	Anillo(int);
	virtual ~Anillo();

	string getNombre() const;
};

