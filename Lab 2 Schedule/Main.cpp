/*
Mason Henry
C++ Fall 2019
DUE: September 12, 2019
Lab #2: Schedule
Print out my weekly schedule to the screen. It is supposed to look exactly like the examply given.
*/

#include <iostream>

using namespace std;

//I assigned three or less letters to a day or time and a class to shorten the amount of time spent typing.
const string M = "Monday  ";
const string T = "Tuesday  ";
const string W = "Wednesday";
const string TH = "Thursday";
const string F = "Friday  ";
const string GC = "10:20	Gen. Chem. I 165";
const string TCE = "11:30	The College Experience 108";
const string C = "12:40	C++ 162";
const string CP = "1:50	Classical Physics 212";
const string EP = "11:30	Engineering Problems 180";
const string GCL = "5:30	Gen. Chem. I 165";
//this string is used to help make everything line up correctly.
const string S = "	";

int main()
{
	//I outputted my whole week long schedule to the screen.
	cout << M << S << GC << endl;
	cout << M << S << TCE << endl;
	cout << M << S << C << endl;
	cout << M << S << CP << endl;
	cout << T << S << EP << endl;
	cout << T << S << C << endl;
	cout << T << S << CP << endl;
	cout << W << S << GC << endl;
	cout << W << S << TCE << endl;
	cout << W << S << C << endl;
	cout << W << S << CP << endl;
	cout << W << S << GCL << endl;
	cout << TH << S << EP << endl;
	cout << TH << S << C << endl;
	cout << TH << S << CP << endl;
	cout << F << S << GC << endl;
	cout << F << S << TCE << endl;
	cout << F << S << CP << endl;

	return 0;

}