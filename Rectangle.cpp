#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(int x,int y){
	uzunluk = x;
	genislik = y;
}
int Rectangle::getUzunluk(){
	return uzunluk;
}
int Rectangle::getGenislik(){
	return genislik;
}
int Rectangle::alan(){
	return uzunluk*genislik;
}
int Rectangle::cevre(){
	return (2*uzunluk)+(2*genislik);
}
