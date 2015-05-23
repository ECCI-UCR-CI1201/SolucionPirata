
#pragma once

#include "Elemento.h"
#include "Util.h"

class Corona : public Elemento {
public:
	Corona(int);
	virtual ~Corona();

	string getNombre() const;
};
