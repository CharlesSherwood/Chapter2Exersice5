/*FileName:Chapter2Exersice5.cpp
Programmer;Charles Sherwood
Date:2/2025
Requirments:Get the average of numbers by adding them and 
dividing them by the amount of numebrs there are
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double one = 28;
	double two = 32;
	double three = 37;
	double four = 24;
	double five = 33;

	double value = 5;

	cout << "We have the numbers 24,28,32,33,37 and we want to find the average first well add" <<endl;

	double sum = one + two + three + four + five;
	
	
	cout << "Then well get the sum which is " << sum << endl;

	cout << "Next we need to divide the sum by the amount of numbers there are "<<value<<"\n";

	double Average = sum / value;
	
	cout << "The average would then be " << Average << endl;
	return 0;







}

