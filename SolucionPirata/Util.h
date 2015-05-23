
#pragma once

#include "stdafx.h"
using namespace std;

class Util {

public:

	static int random(int min, int max) {
		return rand() % (max - min) + min;
	}

	template<class T> static void swap(T & a, T & b) {
		T tmp = a;
		a = b;
		b = tmp;
	}

	template<class T> static void printVector(T * v, int n, bool endln) {
		for (int i = 0; i < n; ++i) {
			cout << v[i] << " ";
		}
		if (endln) {
			cout << endl;
		}
	}

	template<class T> static T * zeroVector(T * v, int n) {
		for (int i = 0; i < n; ++i) {
			v[i] = 0;
		}
		return v;
	}

	template<class T> static T * copyVector(T * v, int n) {
		T * copy = new T[n];
		for (int i = 0; i < n; ++i) {
			copy[i] = v[i];
		}
		return copy;
	}

};
