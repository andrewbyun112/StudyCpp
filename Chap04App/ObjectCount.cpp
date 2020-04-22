#include <stdio.h>

int count = 0;
class Simple
{
private:
	int value;
	static int Count;
public:
	Simple() { count++; }
	~Simple() { count--; }
	void InitCount() {
		count = 0;
	}
	void OutCount() {
		printf("���� ��ü ���� = %d\n", count);
	}
};

int Simple::Count;

int main()
{
	Simple s, * ps;
	s.OutCount();
	ps = new Simple;
	ps->InitCount();
	ps->OutCount();
	delete ps;
	s.InitCount();
	s.OutCount();
	printf("ũ�� = %d\n", sizeof(s));
}
