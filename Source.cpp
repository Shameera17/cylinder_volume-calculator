#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	double rad, prad, height, vol, fvol; /*prad is r^2 and fvol is vol in terms of litres*/
	const double pi = 3.142;

	cout << "\nEnter the radius of the cylinder\n";
	cin >> rad;
	cout << "Enter the height of the cylinder\n";
	cin >> height;

	prad = pow(rad, 2);

	vol = pi * prad;/*volume of the cylinder in m^3*/
	fvol = vol * 1000;/*volume of the cylinder in litres*/

	cout << "the volume of the cylinder" << fvol << "L(" << vol << "m^3)" << endl;
	cout << '\n';

	system("pause");
	return 0;
