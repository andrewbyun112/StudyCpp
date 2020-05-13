#include <iostream>
using namespace std;

enum ITEMTYPE : short {
	WEAPON,
	EQUIPMENT,
	GEM = 10,
	DEFENSE
};

class TEST {
public:
	void print() {
		cout << n1 << "," << s1 << endl;
	}
//private:
	int n1 = 100;
	string s1 = "test";
};

template <class T>
class vector {
public:
	vector(initializer_list<T>);
};

void func(int a) { cout << "func int " << a << endl; }
void func(double* p) { cout << "func double*" << endl; }

constexpr double pow(double x, size_t y) {
	return y != 1 ? x * pow(x, y - 1) : x;
}

int main() {
	cout << pow(2.0, 2) << endl;
	cout << pow(3.0, 4) << endl;


	short ItemType1 = ITEMTYPE::EQUIPMENT; // DEFENSE;
	cout << "Itemtype1 = " << ItemType1 << endl;
	char* p = NULL;
	double* d = NULL;

	func(0);
	func(d);
	func(nullptr);

	cout << "size of nullptr " << sizeof(nullptr) << endl;
	cout << "type of nullptr " << typeid(nullptr).name() << endl;

	TEST test3{ 300, "ป๏น้" };
	test3.print();

	string str1{ "Hello 1" };
	string str2 = "Hello 2";

	int int1{ 100 };

	string str = "Hello";


	
	return 0;
}



