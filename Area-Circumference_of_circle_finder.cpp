#include <iostream>
using namespace std;
int main ()
{
    const float pi = 3.14;
    float area, circum, radius;
    cout <<"Enter radius";
    cin >> radius; // Input: Radius
    circum = pi * 2 * radius; // Mathmetical Equation
    area = pi * (radius * radius); // Mathmetical Equation
    cout <<"Circumference is :" <<circum <<endl; // Output: Circumference
    cout <<"Area is :"<<area <<endl; // Output: Area 
return 0;
}