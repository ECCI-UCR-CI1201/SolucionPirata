
#pragma once

#include "Constantes.h"

using namespace std;

class Elemento {

	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	int id, valor, peso;
	virtual void imprimir(ostream &) const = 0;

public:
	Elemento(int);

	virtual ~Elemento();
	virtual int getValor();
	virtual int getPeso();
};

ostream & operator<<(ostream &, const Elemento &);
