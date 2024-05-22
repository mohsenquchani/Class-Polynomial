#ifndef poly_H
#define poly_H
#include<iostream>
using namespace std;
class poly {
	friend istream& operator>>(istream&, poly&);
	friend ostream& operator<<(ostream&,const poly&);

public:
	poly(int n) {
		size = n > 0 ? n : 10;
		m = new int[size];
	}
	~poly();
	const poly& operator=(const poly&);
	const poly& operator+=(const poly&);
	poly operator+(const poly&)const;

private:
	int size;
	int* m;
};
#endif