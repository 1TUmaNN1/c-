#include <iostream>
#include <math.h>

using namespace std;

double leght(int ax, int ay, int bx, int by){
	double lx, ly;
	double leght;
	
	lx = bx - ax;
	ly = by - ay;
	
	if (ly == 0)
		return lx;
		
	if (lx == 0)
		return ly;
	
	if (lx<0)
		lx *= -1;
		
	if (ly<0)
		ly *= -1;
		
	leght = sqrt(lx*lx+ly*ly);
	
	return leght;
}
double mcos(double a,double b, double c) {
	return (b*b + c*c - a*a)/(2*b*c);
}

int main() {
	int ax, ay, bx, by, cx, cy;
	double ab, ac, bc;
	double prmtr,area, p;
	double cosa,cosb,cosc;
	int anga, angb, angc;
	
	cout << "\n enter x coordinate point a: ";
	cin >> ax;
	cout << "\n enter y coordinate point a: ";
	cin >> ay;
	cout << "\n enter x coordinate point b: ";
	cin >> bx;
	cout << "\n enter y coordinate point b: ";
	cin >> by;
	cout << "\n enter x coordinate point c: ";
	cin >> cx;
	cout << "\n enter y coordinate point c: ";
	cin >> cy;
	
	ab = leght(ax,ay,bx,by);
	ac = leght(ax,ay,cx,cy);
	bc = leght(bx,by,cx,cy);
	
	prmtr = ab + ac + bc;
	p = prmtr / 2;
	
	area = (sqrt(p*(p - ab)*(p - ac)*(p - bc)));
	
	cosa = mcos(ab,ac,bc);
	anga = (acos(cosa) * 180.0 / 3.14159265);
	
	cosb = mcos(bc,ab,ac);
	angb = (acos(cosa) * 180.0 / 3.14159265);
	
	angc = 180 - (anga+angb);
	
	cout << "\n segment ab = " << ab;
	cout << "\n segment bc = " << bc;
	cout << "\n segment ac = " << ac;
	cout << endl;
	cout << "\n angle A = " << anga;
	cout << "\n angle B = " << angb;
	cout << "\n angle C = " << angc;
	cout << endl;
	cout << "\n area = " << area;
	cout << "\n perimeter = " << prmtr;
	return 0;
}
