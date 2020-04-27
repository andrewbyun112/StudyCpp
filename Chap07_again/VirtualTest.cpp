#include <stdio.h>
#include "string.h"
#include <iostream>

using namespace std;

class Human {
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	virtual void intro() { 
		printf("이름 : %s, 나이 = %d\n",name,age); }
};

class Student : public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}
	void intro() {
		printf("%d학번 %s입니다.\n",stunum,name);
	}
	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main() {
	Human h("변승재", 30);
	Student s("이학생",15,1234567);
	Human* pH;
	Student* pS;

	//printf("Human size: %d, Student size : %d\n",sizeof(h),sizeof(s));
	//pH = &h;
	//pH->intro();
	///*pS = &s;
	//pS->intro();*/

	//pH = &s;
	//// pS = &h;
	//pH->intro();
	///*pS = (Student*)&h;
	//pS->intro();*/

	int sel = 0;
	while (true) {
		cout << "원하는 수를 고르세요(1:Human, 2:Student)";
		cin >> sel;
		if (sel == 1) {
			pH = &h;
		}
		else if (sel == 2) {
			pH = &s;
		}
		else {
			cout << "맞는 수가 없습니다." << endl;;
			exit(-1);
		}

		pH->intro();
	}
	
}