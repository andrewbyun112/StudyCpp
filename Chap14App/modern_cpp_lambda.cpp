#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;

template<typename Func>
void Test(Func func,int n) {
	func(n);
}

function<void()>f() {
	string str("lambda");
	return [=] {cout << "Hello." << str << endl; };
	return 0;
}

int main() {
	//int num1 = 0;

	//auto func = [num1](int n)mutable {
	//	num1 = 100;
	//	cout << "Hello World " << num1 << "," << n << endl;
	//};

	//cout << num1 << endl;

	////auto func = [](int n){ cout << "Hello world!"<< n << endl; };
	//
	//Test(func,30);
	////getchar();

	//auto func1 = [] {return 3.14; };
	//auto func2 = [](float f) {return f; };
	//auto func3 = []()->float {return 3.14; };

	//float f1 = func1(); cout << f1 << endl;
	//float f2 = func2(3.14f); cout << f2 << endl;
	//float f3 = func3(); cout << f3 << endl;

	//vector<int> v1;
	//v1.push_back(10);
	//v1.push_back(20);
	//v1.push_back(30);
	//v1.push_back(40);
	//v1.push_back(50);

	//for_each(v1.begin(), v1.end(),[](int n) {cout << n << endl; });

	auto func = f();
	func();
	f()();
	return 0;
}