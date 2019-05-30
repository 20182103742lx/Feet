// Feet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
//1ft = 12in
class CFeet {

	int feet;             
	int inch;
	int x, y;
public:
	CFeet();
	CFeet(int x,int y);
	void displayFeet();
	int setFeet(int x,int y);
	CFeet addFeet(CFeet &od);
	CFeet operator+(CFeet &otemp);
	CFeet operator+(const int &l);
};
CFeet::CFeet() {
	int feet = 0;
	int inch = 0;
}
CFeet::CFeet(int x, int y) {
	feet = x;
	inch = y;
}
int CFeet::setFeet(int x, int y) {
	feet = x;
	inch = y;
	return 0;
}
CFeet CFeet::operator+(CFeet &otemp) {
	CFeet temp;
	temp.setFeet(feet + otemp.feet, inch + otemp.inch);
	return temp;
}
CFeet CFeet::operator+(const int &l) {
	CFeet temp;
	temp.setFeet(feet, inch);
	return temp;
}
CFeet CFeet::addFeet(CFeet &od) {
	CFeet temp;
	temp.setFeet(feet + od.feet, inch + od.inch);
		return temp;
}
void CFeet::displayFeet() {
	cout << feet << "英尺"<< inch <<"英寸 "<< endl;
}

int main() {
	int feet, inch;
	int meter;
	cin >> meter;
	feet = meter / 30.48;
	inch = (meter - 30.48*feet) / 30.48 * 12;
	cout << feet <<"\n"<< inch<<"\n"<<endl;

	CFeet od1(5, 3), od2(3, 2),od3;
	od3 = od1 + od2;
	od1.displayFeet();
	od2.displayFeet();
	od3.displayFeet();
	return 0;

}