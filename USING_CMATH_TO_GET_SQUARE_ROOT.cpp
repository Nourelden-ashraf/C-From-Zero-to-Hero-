#include <iostream>
#include <cmath>
using namespace std;
int main () 
{
float x, y; // X: THE NUMBER U WANT TO GET ITS SQUARE ROOT, Y: (X) SQUARE ROOT
cout << "Enter the number u want to get its square" <<endl ;
cin >> x; // INPUT:
y=sqrt(x); // USING CMATH LIBRARY TO GET SQUARE ROOT OF X
cout << "Its Square root is: " << y; // OUTPUT:
return 0;
}