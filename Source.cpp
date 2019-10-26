#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
	double radius, height, vol, fvol;		//vol is vol in terms of litres
	const double pi = 3.142;

	cout << "\nEnter the radius of the cylinder\n";
	cin >> radius;
	cout << "Enter the height of the cylinder\n";
	cin >> height;
	
	vol = pi *pow(radius, 2);		//volume of the cylinder in m^3
	fvol = vol * 1000;		//volume of the cylinder in litres

	cout << "The volume of the cylinder" << fvol << "L(" << vol << "m^3)" <<\n endl;
	cout << '\n';

	system("pause");
	return 0;
}
