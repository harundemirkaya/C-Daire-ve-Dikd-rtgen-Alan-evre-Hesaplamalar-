#include "MyPoint.h"
#include <iostream>
#include <math.h>
using namespace std;
MyPoint::MyPoint() { // Bu fonksiyon çaðýrýldýðýnda x ve y kordinatlarý sýfýr olarak kaydedilir
	x = 0;
	y = 0;
}
MyPoint::MyPoint(int a, int b) { // Bu fonksiton çaðýrýldýðýnda kullanýcýdan aldýðý deðerleri x ve y kordinatlarýna kaydeder
	x = a;
	y = b;
}
int MyPoint::getX(){ // X i döndürür
	return x;
}
void MyPoint::setX(int a){ // X i ayarlar
	x=a;
}
int MyPoint::getY(){ // Y yi döndürür
	return y;
}
void MyPoint::setY(int a){ // Y yi ayarlar
	y=a;
}
int* MyPoint::getXY(){ // X ve Y yi döndürür
	point[0] = x;
	point[1] = y;
	return point; // X ve Y yi return ederken dizi þeklinde iki deðer döndürebilmesi için ayarladýk
}
/*  Ýki deðer döndürmek için bu yöntemde kullanýlabilir fakat kullanýldýðýnda kodda sýzýntý veriyor. O yüzden üstteki dizi yöntemi kullandým.
int* MyPoint::getXY(){
	return new int[2] {x, y};
}
*/
void MyPoint::setXY(int a,int b){ // X ve Y yi ayarlar
	x = a;
	y = b;
}
void MyPoint::toString(){ // X ve Y yi yazdýrýr
	cout << "Nokta kordinatýnýz : (" << x << "," << y << ")" << endl;
}
double MyPoint::distance(int a, int b){ // Kullanýcýdan aldýðý nokta kordinatlarýna göre X ve Y nin bu noktaya olan uzaklýüýný hesaplar
	return sqrt((x-a)*(x-a)+(y-b)*(y-b)); // Matematiksel iþlem
}
double MyPoint::distance(MyPoint p2){ // Ayný sýnýfýn farklý nesneleri ile aradaki mesafeyi hesaplar
	int tmpx = p2.getX(); // Diðer sýnýfýn X kordinatý
	int tmpy = p2.getY(); // Diðer sýnýfýn Y kordinatý
	return sqrt((x-tmpx)*(x-tmpx)+(y-tmpy)*(y-tmpy)); // Matematiksel iþlem
}
double MyPoint::distance(){ // X ve Y nin (0,0) yani orijine olan uzaklýüýný hesaplar
	return sqrt((x)*(x)+(y)*(y)); // Matematiksel iþlem
}
