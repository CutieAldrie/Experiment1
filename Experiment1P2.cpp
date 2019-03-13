#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	double Mass, Density;
cout << "Input Mass: " << endl;
cin >> Mass;
cout << "Mass = " << Mass << "g" << endl;
cout << "Input Density: " << endl;
cin>> Density;
cout << "Density = " << Density << "g/cm^3" << endl;
cout << "Volume of the object = " << Mass/(4*Density) << "cm^3" << endl;
_getch();
return 0;
}
	