#include <stdio.h>

class Calc
{
public:
	void Op1(int a, int b) { printf("%d\n", a + b); }
	void Op2(int a, int b) { printf("%d\n", a - b); }
	void Op3(int a, int b) { printf("%d\n", a * b); }
};

int main()
{
	int ch;
	Calc c;
	int a = 3, b = 4;
	while (true) {
		printf("연산 방법을 선택하시오. 1=더하기, 2=빼기, 3=곱하기, 0=종료 : ");
		scanf("%d", &ch);

		switch (ch) {
		case 1:
			c.Op1(a, b);
			break;
		case 2:
			c.Op2(a, b);
			break;
		case 3:
			c.Op3(a, b);
			break;
		case 0:
			return 0;
			break;
		}
	}
}
