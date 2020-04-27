#include <stdio.h>

class Shape {
public:
	virtual void draw() { puts("도형 오브젝트입니다."); }
};

class Line : public Shape {
public:
	void draw() { puts("선을 긋습니다."); }
};

class Circle : public Shape {
	void draw() { puts("원을 그립니다."); }
};

class Rect : public Shape {
	void draw() { puts("사각형을 그립니다."); }
};

int main()
{
	Shape* ar[] = { new Shape(),new Rect(), new Circle(),new Rect(),new Line() };

	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
	{
		ar[i]->draw();
	}
	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		delete ar[i];
	}
}