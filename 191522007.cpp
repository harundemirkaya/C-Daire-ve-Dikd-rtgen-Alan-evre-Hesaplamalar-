#include <iostream>
#include "MyPoint.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;
void getRectangle(MyPoint p[]){
	int tmp1;
	for(int i=0; i<4; i++){
		cout << "X" << i+1 << ": ";
		cin >> tmp1;
		p[i].setX(tmp1);
		cout << "Y" << i+1 << ": ";
		cin >>  tmp1;
		p[i].setY(tmp1);
		cout << endl;
	}
}
void RecSirala(MyPoint p[]){
	int tmp1,tmp2;
	for(int i=0;i<4;i++) 
		for(int j=0;j<4;j++) { 
			if(p[j].getX()>p[j+1].getX()){ 
				tmp1=p[j].getX(); 
				p[j].setX(p[j+1].getX()); 
				p[j+1].setX(tmp1); 
			}
			if(p[j].getY()>p[j+1].getY()){ 
				tmp2=p[j].getY(); 
				p[j].setY(p[j+1].getY()); 
				p[j+1].setY(tmp2); 
			}
		}
}
int main() {
	setlocale(LC_ALL,"Turkish");
	MyPoint *p = new MyPoint[4];
	MyPoint *p2 = new MyPoint[4];
	int tmp1,tmp2,tmp3;
	cout << "Dikd�rtgenin k��e noktalar�n� giriniz: " << endl;
	getRectangle(p);
	RecSirala(p);
	cout << "Sol �st: " << p[0].getX() << " " << p[3].getY() << endl;
	cout << "Sa� �st: " << p[3].getX() << " " << p[3].getY() << endl;
	cout << "Sol alt: " << p[0].getX() << " " << p[0].getY() << endl;
	cout << "Sa� alt: " << p[3].getX() << " " << p[0].getY() << endl;
	MyPoint p3;
	p3.setXY(p[0].getX(),p[3].getY());
	double uzunluk = p3.distance(p[0].getX(),p[0].getY());
	double genislik = p3.distance(p[3].getX(),p[3].getY());
	Rectangle *r = new Rectangle(uzunluk,genislik);
	cout << "Dikd�rtgenin Uzunlu�u: " << r->getUzunluk() << endl;
	cout << "Dikd�rtgenin geni�li�i: " << r->getGenislik() << endl;
	cout << "Dikd�rtgenin alan�: " << r->alan() << endl;
	cout << "Dikd�rtgenin �evresi: " << r->cevre() << endl << endl;
	cout << "�kinci bir dikd�rtgenin k��e kordinatlar�n� giriniz: " << endl;
	getRectangle(p2);
	RecSirala(p2);
	cout << "Sol �st: " << p2[0].getX() << " " << p2[3].getY() << endl;
	cout << "Sa� �st: " << p2[3].getX() << " " << p2[3].getY() << endl;
	cout << "Sol alt: " << p2[0].getX() << " " << p2[0].getY() << endl;
	cout << "Sa� alt: " << p2[3].getX() << " " << p2[0].getY() << endl;
	MyPoint p4;
	p4.setXY(p2[0].getX(),p2[3].getY());
	uzunluk = p4.distance(p2[0].getX(),p2[0].getY());
	genislik = p4.distance(p2[3].getX(),p2[3].getY());
	Rectangle *r2 = new Rectangle(uzunluk,genislik);
	cout << "Dikd�rtgenin Uzunlu�u: " << r2->getUzunluk() << endl;
	cout << "Dikd�rtgenin geni�li�i: " << r2->getGenislik() << endl;
	cout << "Dikd�rtgenin alan�: " << r2->alan() << endl;
	cout << "Dikd�rtgenin �evresi: " << r2->cevre() << endl << endl;
	if(p2[3].getY()<=p[3].getY() && p2[3].getY()>=p[0].getY() && p2[0].getX()>=p[0].getX() && p2[0].getX()<=p[3].getX())	
		cout << "Kesi�ir";
	else if (p[3].getY()<=p2[3].getY() && p[3].getY() >= p2[0].getY() && p[0].getX()>=p2[0].getX() && p[0].getX()<=p2[3].getX())
		cout << "Kesi�ir";
	else if(p2[0].getY()<= p[3].getY() && p2[0].getY()>=p[0].getY() && p2[0].getX()>=p[0].getX() && p2[0].getX()<=p[3].getX())
		cout << "Kesi�ir";
	else if(p[0].getY()<=p2[3].getY() && p[0].getY()>=p2[0].getY() && p[0].getX()>=p2[0].getX() && p[0].getX()<=p2[3].getX())
		cout << "Kesi�ir";
	else if(p2[3].getY()<=p[3].getY() && p2[3].getY()>=p[0].getY() && p2[3].getX()>=p[0].getX() && p2[3].getX()<=p[3].getX())
		cout << "Kesi�ir";
	else if(p[3].getY()<=p2[3].getY() && p[0].getY()>=p2[0].getY() && p[3].getX()>=p2[0].getX() && p[3].getX()<=p2[3].getX())
		cout << "Kesi�ir";
	else
		cout << "Kesi�mez";
	delete r;
	delete r2;
	delete[] p;
	delete[] p2;
	cout << endl << "Dairenin Merkezini Giriniz: " << endl;
	MyPoint *ctmp = new MyPoint();
	cout << "X: ";
	cin >> tmp1;
	ctmp->setX(tmp1);
	cout << "Y: ";
	cin >>tmp2;
	ctmp->setY(tmp2);
	cout << "Dairenin Yar��ap�n� giriniz: ";
	cin >> tmp3;
	Circle *c = new Circle(ctmp->getX(),ctmp->getY());
	delete ctmp;
	c->setYaricap(tmp3);
	cout << "Dairenin Merkezi: (" << c->getX() << "," << c->getY() << ")" << endl;
	cout << "Dairenin Yar��ap�: " << c->getYaricap() << endl;
	cout << "Dairenin Alan�: " << c->alan() << endl;
	cout << "Dairenin �evresi: " << c->cevre() << endl;
	cout << endl << "Dairenin Merkezini Giriniz: " << endl;
	MyPoint *ctmp2 = new MyPoint();
	cout << "X: ";
	cin >> tmp1;
	ctmp2->setX(tmp1);
	cout << "Y: ";
	cin >>tmp2;
	ctmp2->setY(tmp2);
	cout << "�kinci bir dairenin Yar��ap�n� giriniz: ";
	cin >> tmp3;
	Circle *c2 = new Circle(ctmp2->getX(),ctmp2->getY());
	delete ctmp2;
	c2->setYaricap(tmp3);
	cout << "Dairenin Merkezi: (" << c2->getX() << "," << c2->getY() << ")" << endl;
	cout << "Dairenin Yar��ap�: " << c2->getYaricap() << endl;
	cout << "Dairenin Alan�: " << c2->alan() << endl;
	cout << "Dairenin �evresi: " << c2->cevre() << endl;
	int yaricaptoplam = c->getYaricap()+c2->getYaricap();
	MyPoint *faztmp = new MyPoint(c->getX(),c->getY());
	double faz = faztmp->distance(c2->getX(),c2->getY());
	delete faztmp;
	if(yaricaptoplam<faz)
		cout << "�emberler birbirini kesmez";
	else if(yaricaptoplam>faz)
		cout << "�emberler birbirini keser.";
	else
		cout << "�emberler birbirine te�ettir.";
	return 0;
}
