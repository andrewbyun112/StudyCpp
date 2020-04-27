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
		printf("�̸� : %s, ���� = %d\n",name,age); }
};

class Student : public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}
	void intro() {
		printf("%d�й� %s�Դϴ�.\n",stunum,name);
	}
	void study() {
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
};

int main() {
	Human h("������", 30);
	Student s("���л�",15,1234567);
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
		cout << "���ϴ� ���� ������(1:Human, 2:Student)";
		cin >> sel;
		if (sel == 1) {
			pH = &h;
		}
		else if (sel == 2) {
			pH = &s;
		}
		else {
			cout << "�´� ���� �����ϴ�." << endl;;
			exit(-1);
		}

		pH->intro();
	}
	
}