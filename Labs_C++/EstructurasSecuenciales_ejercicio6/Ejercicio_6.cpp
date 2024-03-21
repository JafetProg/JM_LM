#include <iostream>
using namespace std;

int main ()
{
    float width, length;
    cout << "Input the width of the rectangle: ";
    cin >> width;
    cout << "Input the length of the rectangle: ";
    cin >> length;
    float area = width * length;
    float perimeter = 2*width + 2*length;
    cout << "The area of the rectangle is: " << area << endl ;
    cout << "The perimeter of the rectangle is: "<< perimeter;
}