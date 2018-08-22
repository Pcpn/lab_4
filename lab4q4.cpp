#include<iostream>
using namespace std;
int main(){
// declaring variables
float YEAR, WEEK, DAY;
//enter the days
cout << "Number of days";
cin >> DAY;
//convert days into weeks and years
WEEK = DAY/7;
YEAR = DAY/365;
//display output
cout << " Number of weeks is" << WEEK << endl;
cout << " Number of years is" << YEAR << endl;
}

