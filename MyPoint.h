#include <iostream>
#ifndef MYPOINT_H
#define MYPOINT_H
class MyPoint
{
	public:
		MyPoint(); // ��i bo� metod
		MyPoint(int,int); // Kullan�c�dan al�nan de�erleri ayarlayacak metod
		int getX(); // X i d�nd�ren metod
		void setX(int); // X i ayarlayan metod
		int getY(); // Y yi d�nd�ren metod
		void setY(int); // Y yi ayarlayan metod
		int* getXY(); // X ve Y yi d�nd�ren metod
		void setXY(int,int); // X ve Y yi ayarlayan metod
		void toString(); // X ve Y yi yazd�ran metod
		double distance(int,int); // Kullan�c�dan al�nan noktalar ile X ve Y nin aras�ndaki mesafeyi hesaplayacak metod
		double distance(MyPoint); // Farkl� nesneden al�nan noktalar�n X ve Y ile aras�ndaki mesafeyi hesaplayacak metod
		double distance(); // X ve Y nin (0,0) yani orjine olan uzakl���n� hesaplayacak metod
	private:
		int x; // X kordinat�m�z
		int y; // Y kordinat�m�z
		int point[2]; // getXY() metodumuzda iki de�er d�nd�rebilmek i�in bir dizi tan�ml�yoruz. Bu diziyi direk d�nd�rd���m�zde iki de�eride return edebiliriz.
		// point dizisini burada tan�mlamam�z�n nedeni kodda s�z�nt� vermemesidir. S�n�f�n cpp dosyas�nda tan�mlad���m�zda s�z�nt� nedeni oluyordu.
};

#endif
