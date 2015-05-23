
#include "stdafx.h"
#include "Tesoro.h"
#include "Pirata.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	srand((unsigned int) time(NULL));

	Tesoro t;
	Pirata p;
	p.saquear(t);

	return 0;
}

