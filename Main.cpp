#include<iostream>
#include"poly.h"
using namespace std;

int main() {
	poly p1(2);
	cin >> p1;
	poly p2(3);
	cin >> p2;

	cout << p1 << endl;
	cout << p2 << endl;

	poly p3 = p1 + p2;
	cout << p3 << endl;

	p1 += p2;
	cout << p1 << endl << p2 << endl;

	return 0;
}