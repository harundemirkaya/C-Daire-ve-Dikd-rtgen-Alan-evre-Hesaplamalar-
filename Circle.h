#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	public:
		Circle(int,int);
		int getYaricap();
		double alan();
		double cevre();
		int getX();
		int getY();
		void setYaricap(int);
		void denklem();
	private:
		int yaricap;
		int merkezX;
		int merkezY;
};

#endif
