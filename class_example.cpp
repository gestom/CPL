#include <stdio.h>
#include <stdlib.h>

SPoint2D add(SPoint2D a,SPoint2D b)
{
	SPoint2D c;
	c.x = a.x + b.x; 
	c.y = a.y + b.y;
	return c;
}

class CPoint2D
{
	public:
	CPoint2D();
	~CPoint2D();

	float x;
	float y;
	float *buffer;
};

CPoint2D::CPoint2D()
{
	buffer = (float*)malloc(100);
	x = 1;
	y = 1;

}

CPoint2D::~CPoint2D()
{
	free(buffer);
}

int main()
{
	CPoint2D a;
	//printf("(%.3f %.3f)\n",a.x,a.y);	

	return 0;
}
