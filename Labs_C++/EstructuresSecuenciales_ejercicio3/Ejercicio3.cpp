#include <iostream>
using namespace std;

int main ()
{
int currentYear, BirthYear;
cout << "Input the current year: ";
cin >> currentYear;
cout << "Input the year of your birth: ";
cin >> BirthYear;
int Age = currentYear - BirthYear;
cout << "Your age is: " << Age;
}