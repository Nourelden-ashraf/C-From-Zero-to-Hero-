#include <iostream>
using namespace std;
float radius;

void area (){
    const float pi = 3.14;
    float area;
    area = pi * (radius * radius); // Mathmetical Equation
    cout <<"Area is :"<<area <<endl; // Output: Area 
}

void circum (){
    const float pi = 3.14;
    float circum;
    circum = pi * 2 * radius; // Mathmetical Equation
    cout <<"Circumference is :" <<circum <<endl; // Output: Circumference
}

int main ()
{
cout << "enter ur radius";
cin >> radius ;
   circum ();
   area ();
return 0;
}