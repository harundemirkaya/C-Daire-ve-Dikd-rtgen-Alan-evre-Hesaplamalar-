#include <iostream>
#ifndef MYPOINT_H
#define MYPOINT_H
class MyPoint
{
	public:
		MyPoint(); // Ýçi boþ metod
		MyPoint(int,int); // Kullanýcýdan alýnan deðerleri ayarlayacak metod
		int getX(); // X i döndüren metod
		void setX(int); // X i ayarlayan metod
		int getY(); // Y yi döndüren metod
		void setY(int); // Y yi ayarlayan metod
		int* getXY(); // X ve Y yi döndüren metod
		void setXY(int,int); // X ve Y yi ayarlayan metod
		void toString(); // X ve Y yi yazdýran metod
		double distance(int,int); // Kullanýcýdan alýnan noktalar ile X ve Y nin arasýndaki mesafeyi hesaplayacak metod
		double distance(MyPoint); // Farklý nesneden alýnan noktalarýn X ve Y ile arasýndaki mesafeyi hesaplayacak metod
		double distance(); // X ve Y nin (0,0) yani orjine olan uzaklýðýný hesaplayacak metod
	private:
		int x; // X kordinatýmýz
		int y; // Y kordinatýmýz
		int point[2]; // getXY() metodumuzda iki deðer döndürebilmek için bir dizi tanýmlýyoruz. Bu diziyi direk döndürdüðümüzde iki deðeride return edebiliriz.
		// point dizisini burada tanýmlamamýzýn nedeni kodda sýzýntý vermemesidir. Sýnýfýn cpp dosyasýnda tanýmladýðýmýzda sýzýntý nedeni oluyordu.
};

#endif
