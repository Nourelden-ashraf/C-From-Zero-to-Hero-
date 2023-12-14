#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void bigandsmall () {
    int x;
    int y;
    int z;
    cin >> x;
    cin >> y;
    cin >> z;
    if ((x > z) && (x > y)) {
        cout << "x is the biggest" << endl;
        }
         else if ((x < z) && (x < y)) {
            cout << "x is the smallest"<< endl;
             }
if ((y > z) && (y > x)) {
        cout << "y is the biggest" << endl;
 }
 else if ((y < z) && (y < x)) {
            cout << "y is the smallest" << endl;
}
 if (z > x && z > y) {
        cout << "z is the biggest" << endl;
    }
    else if ((z < x) && (z < y)) {
            cout << "z is the smallest" << endl;
        }
        if (x == y)
        {
        cout << " X AND Y ARE EQUAL" <<endl;
        }
        else if (z == y)
        {
        cout << " Z AND Y ARE EQUAL" <<endl;
        }
         if (x == z)
        {
        cout << " X AND Z ARE EQUAL" <<endl;
        }
    
        
}
int main() {   
bigandsmall ();

    return 0;
}