#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

	//Author: James Saylor
	//Description: This program will display the amount due at airport parking
	//				

int main ()
{
	//first two rows in program
	cout << left << setw(15) << " Lot Name:" << right << setw(20) << "ABC Parking" << endl;
	cout << left << setw(15) << " Week:" << right << setw(20) << "March 19-23, 2018" << endl << endl;
	
	//the second row and hash borders
	cout << setw(5) << "+" << setw(40) << setfill ('-') << "+" << endl;
	cout << setw(14) << setfill(' ') << "Parking" << setw(11) << "Number";
	cout << setw(13) << "Total" << endl;
	cout << setw(11) << "Type" << setw (15) << "of Cars" << setw(16) << "Collected" << endl;
	cout << setw(5) << "+" << setw(40) << setfill ('-') << "+" << setfill(' ') << endl;
	
	//third row and final hash border
	cout << setw(12) << "Valet" << setw(14) << setfill(' ') << 93;
	cout << setw(16) << setfill(' ') << 6696.75 << endl;
	cout << setw(14) << "Covered" << setw(12) << setfill(' ') << 532;
	cout << setw(16) << setfill(' ') << setprecision(2) << fixed << 23501.00 << endl;
	cout << setw(16) << "Uncovered" << setw(10) << setfill(' ') << 3881; 
	cout << setw(16) << setfill(' ') << 139122.20 << endl;
	cout << setw(15) << "Overflow" << setw(11) << setfill(' ') << 0;
	cout << setw(16) << setfill(' ') << 0.00 << endl;
	cout << setw(5) << "+" << setw(40) << setfill ('-') << "+" << setfill(' ');

 	cout << endl << endl;
 	return 0;
}

