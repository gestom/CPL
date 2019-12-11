#include <stdio.h>
#include <stdlib.h>

class CPoint2D
{
	public:
	CPoint2D();
	~CPoint2D();
	float getX();
	float getY();
	void setX(float ix);
	void setY(float iy);
	float getBuffer(int i);

	private:
	float x;
	float y;
	float *buffer;
};

float CPoint2D::getBuffer(int i)
{
	if (i>0 && i< 100/sizeof(float)) return buffer[i];
	return 0;
}

float CPoint2D::getX()
{
	return x;
}

float CPoint2D::getY()
{
	return y;
}

void CPoint2D::setX(float ix)
{
	x = ix;
}

void CPoint2D::setY(float iy)
{
	y = iy;
}

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
	printf("%.1f\n",a.getBuffer(100));

	return 0;
}
