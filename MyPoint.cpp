#include "MyPoint.h"
#include <iostream>
#include <math.h>
using namespace std;
MyPoint::MyPoint() { // Bu fonksiyon �a��r�ld���nda x ve y kordinatlar� s�f�r olarak kaydedilir
	x = 0;
	y = 0;
}
MyPoint::MyPoint(int a, int b) { // Bu fonksiton �a��r�ld���nda kullan�c�dan ald��� de�erleri x ve y kordinatlar�na kaydeder
	x = a;
	y = b;
}
int MyPoint::getX(){ // X i d�nd�r�r
	return x;
}
void MyPoint::setX(int a){ // X i ayarlar
	x=a;
}
int MyPoint::getY(){ // Y yi d�nd�r�r
	return y;
}
void MyPoint::setY(int a){ // Y yi ayarlar
	y=a;
}
int* MyPoint::getXY(){ // X ve Y yi d�nd�r�r
	point[0] = x;
	point[1] = y;
	return point; // X ve Y yi return ederken dizi �eklinde iki de�er d�nd�rebilmesi i�in ayarlad�k
}
/*  �ki de�er d�nd�rmek i�in bu y�ntemde kullan�labilir fakat kullan�ld���nda kodda s�z�nt� veriyor. O y�zden �stteki dizi y�ntemi kulland�m.
int* MyPoint::getXY(){
	return new int[2] {x, y};
}
*/
void MyPoint::setXY(int a,int b){ // X ve Y yi ayarlar
	x = a;
	y = b;
}
void MyPoint::toString(){ // X ve Y yi yazd�r�r
	cout << "Nokta kordinat�n�z : (" << x << "," << y << ")" << endl;
}
double MyPoint::distance(int a, int b){ // Kullan�c�dan ald��� nokta kordinatlar�na g�re X ve Y nin bu noktaya olan uzakl���n� hesaplar
	return sqrt((x-a)*(x-a)+(y-b)*(y-b)); // Matematiksel i�lem
}
double MyPoint::distance(MyPoint p2){ // Ayn� s�n�f�n farkl� nesneleri ile aradaki mesafeyi hesaplar
	int tmpx = p2.getX(); // Di�er s�n�f�n X kordinat�
	int tmpy = p2.getY(); // Di�er s�n�f�n Y kordinat�
	return sqrt((x-tmpx)*(x-tmpx)+(y-tmpy)*(y-tmpy)); // Matematiksel i�lem
}
double MyPoint::distance(){ // X ve Y nin (0,0) yani orijine olan uzakl���n� hesaplar
	return sqrt((x)*(x)+(y)*(y)); // Matematiksel i�lem
}
