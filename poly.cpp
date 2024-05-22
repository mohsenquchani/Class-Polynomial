#include<iostream>
#include"poly.h"
using namespace std;

poly::~poly() {
	delete [] m;
}

const poly &poly::operator=(const poly& p) {
	if (this != &p) {
		delete[]m;
		size = p.size;
		m = new int [size];
	}
	for (int i = 0; i < size; i++)
		m[i] = p.m[i];
	return *this;
}
poly poly::operator+(const poly& p)const {
	int max = size > p.size ? size : p.size;
	int min = size > p.size ? p.size : size;
	poly temp(max);
	for (int i = 0; i < min; i++) {
		temp.m[i] = m[i] + p.m[i];
	}
	if (min == size)
		for (int i = min; i < max; i++)
			temp.m[i] = p.m[i];
	else
		for (int i = min; i < max; i++)
			temp.m[i] = m[i];
	return temp;
}

const poly& poly::operator+=(const poly &p) {
	*this = *this + p;
	return *this;
}

istream& operator>>(istream& in,poly& p) {
	for (int i = 0; i < p.size; i++)
		in >> p.m[i];
	return in;
}
ostream& operator<<(ostream& o,const poly& p) {
	for (int i = 0; i < p.size; i++) {
		o << p.m[i] << "x^" << i;
		if(i!=p.size-1)
			o << " + ";
	}
	return o;
}
