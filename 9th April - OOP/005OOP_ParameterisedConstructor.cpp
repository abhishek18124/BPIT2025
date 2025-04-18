#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer(string n, int a, char g, double c) {
		cout << "\nI am inside the parameterised constructor of the customer class\n";
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	customer() {
		cout << "\nI am inside the default constructor of the customer class\n";
	}

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl;
	}
};



int main() {

	customer c1("Ramanujan", 32, 'M', 1729); // internally addr of c1 is passed during this constructor call

	c1.print();

	customer c2;

	return 0;
}