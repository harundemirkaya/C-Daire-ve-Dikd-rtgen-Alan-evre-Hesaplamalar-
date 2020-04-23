#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		Rectangle(int,int);
		int getUzunluk();
		int getGenislik();
		int alan();
		int cevre();
	private:
		int uzunluk;
		int genislik;
};

#endif
