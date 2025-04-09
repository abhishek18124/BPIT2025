#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer(string n, int a, char g, double c) {
		cout << "\ninside the parameterised constructor of the \'customer\' class\n" << endl;
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}

	bool operator>(customer& c) { // c is reference to c2 // we are doing this to avoid copying c2
		if (age > c.age) {
			return true;
		} else {
			return false;
		}
	}

	int operator+(customer& c) {
		return age + c.age;
	}

};

// we can also overload operators as non-member fns

int operator-(customer& c1, customer& c2) {
	return c1.age - c2.age;
}

void operator<<(ostream& cout, customer& c) {
	cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
}

int main() {

	customer c1("Ramanujan", 32, 'M', 1729);
	customer c2("Aryabhata", 74, 'M', 0);

	// c1.operator>(c2); // since operator> is invoked on c1 and c2 is passed
	// as arg that means addr of c1 is passed internally and opertor> will have
	// a single parameter which will refer to c2

	c1 > c2 ? cout << c1.name << " is older than " << c2.name << endl :
	               cout << c2.name << " is older than " << c1.name << endl;


	cout << c1 + c2 << endl; // c1.operator+(c2)
	cout << c1.operator + (c2) << endl;

	cout << c1 - c2 << endl; // c1.operator-(c2) // operator-(c1, c2)

	cout << c1;
	// cout.operator << (c1); // operator<<(cout, c1)

	return 0;

}