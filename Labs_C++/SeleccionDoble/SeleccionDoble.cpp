#include <iostream>
using namespace std;

int main()
{
    int yearsWorked; // Whole number

    cout << "Input the number of years the employee has worked at the company:" ;
    cin >> yearsWorked;

    if (yearsWorked >= 5)
    {
        cout << "The Employee is eligible for a bonus of $1000."
        << endl;
    }

    else 
    {
        cout << " The Employee is not eligible for a bonus."
        << endl;
    }
    return 0;
}