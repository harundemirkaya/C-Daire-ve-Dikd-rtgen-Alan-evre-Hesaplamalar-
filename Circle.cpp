#include "Circle.h"
#include <iostream>
using namespace std;
Circle::Circle(int x, int y){
	merkezX = x;
	merkezY = y;
}
int Circle::getYaricap(){
	return yaricap;
}
double Circle::alan(){
	return (3.14)*(yaricap*yaricap);
}
double Circle::cevre(){
	return 2*(3.14)*yaricap;
}
int Circle::getX(){
	return merkezX;
}
int Circle::getY(){
	return merkezY;
}
void Circle::denklem(){
	int d = -1*2*merkezX;
	int e = -1*2*merkezY;
	int f = (merkezX*merkezX)+(merkezY*merkezY);
}
void Circle::setYaricap(int r){
	yaricap = r;
}
