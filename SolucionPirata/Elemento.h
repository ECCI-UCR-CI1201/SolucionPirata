
#pragma once

#include "Constantes.h"

using namespace std;

class Elemento {

	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	int id, valor, peso;

public:
	Elemento(int);
	virtual ~Elemento();

	int getValor();
	int getPeso();
	virtual string getNombre() const = 0;

};

ostream & operator<<(ostream &, const Elemento &);
