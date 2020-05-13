#include <iostream>
#include <random>
#include <thread>
using namespace std;

int main() {
	thread Tread1([]() {
		for (int i = 0; i < 5; ++i)
		{
			cout << "Hello Tread" << endl;
		}
		});
	return 0;
}