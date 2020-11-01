// LR2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>

//ñfhhd

class Point{
public:
	int x, y; //àòðèáóòû
	Point(){ //êîíñòðóêòîð
		printf("Point()\n");
		x = 0;
		y = 0;
	}
	Point(int x, int y){ //êîíñòðóêòîð ñ ïàðàìåòðàìè
		printf("Point(int x, int y)\n");
		this->x = x;
		this->y = y;
	}
	Point(const Point &p){ //êîïèðóþùèé êîíñòðóêòîð 
		printf("Point(const Point &p)\n");
		x = p.x;
		y = p.y;
	}
	~Point(){ //äåñòðóêòîð
		printf("%d, %d\n", x, y);
		printf("~Point()\n");
	}
};



int _tmain(int argc, _TCHAR* argv[])
{
	{
		Point p;
		Point p2(10, 20);
		Point p3(p2);
	}
	

	_getch();
	return 0;
}


