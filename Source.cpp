.//Brittany Kelley 
//October 10, 2017
//In-Class 4-5 Assignment 

#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	double weight, height;
	double bmi;

	//receive weight and height from customer 

	cout << "How much do you weigh in pounds? \n";
	cin >> weight;

	cout << "How tall are you in inches? \n";
	cin >> height;

	//compute bmi, weight * 703/height * height

	bmi = (weight * 703) / (height * height);

	cout << "Your bmi is: " << bmi << endl;

	if (bmi < 18.5)
		cout << "you are underweight \n";
	else if (bmi > 25)
		cout << "you are overweight \n";
	else
		cout << "you are just right \n";
	


	system("Pause");
}