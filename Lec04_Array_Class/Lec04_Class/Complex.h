#pragma once
#include <cstdio>

class Complex {
	double real;
	double imag;

public:
	void set(double r, double i) {
		real = r;
		imag = i;
	}
	void read(const char* msg = " 복소수 = ") {
		printf(" %s ", msg);
		scanf_s("%lf%lf", &real, &imag);
	}
	void print(const char* msg = " 복소수 = ") {
		printf(" %s %4.2f + %4.2fi\n", msg, real, imag);
	}
	void add(Complex a, Complex b) {
		real = a.real + b.real;
		imag = a.imag + b.imag;
	}

};
