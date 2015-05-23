/*
 * Collar.h
 *
 *  Created on: May 8, 2015
 *      Author: Ruben
 */

#pragma once

#include "Elemento.h"
#include "Util.h"

class Collar : public Elemento {
public:
	Collar(int);
	virtual ~Collar();

	string getNombre() const;
};
