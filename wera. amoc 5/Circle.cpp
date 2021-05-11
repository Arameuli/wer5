#include "Circle.h"
#include<fstream>
#include<iostream>
using namespace std;
ifstream fin("input.txt");
Circle :: Circle() {

}
Circle :: Circle(int radious, int centKoordin) {
	this->radious = radious;
	this->centKoordin = centKoordin;
}
void Circle::Load() {
	fin >> radious >> centKoordin;
}
void Circle :: Show() {
	cout << radious << " " << centKoordin << endl;
}
