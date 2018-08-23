#include<iostream>
using namespace std;
int main(){
//declaring variables
float a, b, c, d, e, total, average, percentage; 
//marks obtained
cout << "marks obtained in maths";
cin >> a;
cout << "marks obtained in physics";
cin >> b;
cout << "marks obtained in chemistry";
cin >> c;
cout << "marks obtained in biology";
cin >> d;
cout << "marks obtained in english";
cin >> e;
//total, average and percentage
total = a+b+c+d+e;
average = (a+b+c+d+e)/5;
percentage = (a+b+c+d+e)/500*100;
//display output
cout << "total marks obtained is" << total<<endl;
cout << "average marks obtained is"<< average<<endl;
cout << "percentage of marks obtained is "<< percentage<< "%" <<endl;
}
