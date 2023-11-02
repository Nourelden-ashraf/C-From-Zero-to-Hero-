#include <iostream>
using namespace std;
int main ()
{
    float miles, km;
    cout << "Enter Distance in Miles";
    cin >> miles;
    km = miles * 1.60934; //Mathmetical Equation
    cout << "Distance In kilos" << km <<endl;
    return 0; // End of Program
}