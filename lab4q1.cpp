/*
 *  Write a program to enter length in cm and convert into meter and km.
 */

#include<iostream>
using namespace std;

int main(){
	// Declaring variables 
	float lengthCM, lengthM, lengthKM;
	// enter length in cm
	cout << "What is the length in cm? ";
	cin >> lengthCM; 
	// convert into meter
	lengthM = lengthCM/100;
	// convert into km
	lengthKM = lengthM/1000;

	// Display the output. 
	cout << "The length is " << lengthM << "m and length is " << lengthKM << "km." << endl;

}



