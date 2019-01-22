#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
	double rad, height, vol, fvol;		//vol is vol in terms of litres
	const double pi = 3.142;

	cout << "\nEnter the radius of the cylinder\n";
	cin >> rad;
	cout << "Enter the height of the cylinder\n";
	cin >> height;
	
	vol = pi *pow(rad, 2);		//volume of the cylinder in m^3
	fvol = vol * 1000;		//volume of the cylinder in litres

	cout << "the volume of the cylinder" << fvol << "L(" << vol << "m^3)" << endl;
	cout << '\n';

	system("pause");
	return 0;
}
