#include <iostream>
#include <cmath>
using namespace std;
int main () 
{
float x, y, answer; 
cout << "Enter the 1st number u want to get its square" ;
cin >> x; 
answer=sqrt(x);
cout << "Square root of 1st is:" << answer <<endl ;
cout << "Enter the 2nd number u want to get its square";
cin >> y;
answer=sqrt(y);
cout << "Square root of 2nd is" << answer <<endl ;
answer=sqrt(x+y);
cout << "square root of x+y is" << answer;


return 0;
}