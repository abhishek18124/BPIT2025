#include<iostream>

using namespace std;

int main() {

	int* ptr = new int;
	*ptr = 50;
	cout << *ptr << endl;
	delete ptr;

	char* chptr = new char;
	*chptr = 'A';
	cout << *chptr << endl;
	delete chptr;

	double* dptr = new double;
	*dptr = 3.14;
	cout << *dptr << endl;
	delete dptr;

	return 0;
}