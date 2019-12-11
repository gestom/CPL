#include <stdio.h>

typedef struct
{
	float x;
	float y;
}SPoint2D;

SPoint2D add(SPoint2D a,SPoint2D b)
{
	SPoint2D c;
	c.x = a.x + b.x; 
	c.y = a.y + b.y;
	return c;
}

int main()
{
	SPoint2D a;
	SPoint2D b;
	a.x = 0;
	a.y = 1;
	b.x = 1;
	b.y = 1;
	SPoint2D c = a + b;
	printf("(%.3f %3.f) + (%.3f %3.f) = (%.3f %3.f)\n",a.x,a.y,b.x,b.y,c.x,c.y);	
	return 0;
}
