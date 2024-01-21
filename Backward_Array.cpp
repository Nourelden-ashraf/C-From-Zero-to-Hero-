#include <iostream>
#include <string>
#include <utility>
using namespace std;
/*
programm to output strings with backward
note:
this is still beta
i'm still figuring out an equation to make it not limited to provided Array with 10 variables
*/
int main () {
int cube[10];
for (int i = 0; i < 10; i++)
cube[i] = i * i * i;

cout << cube [0] << endl;
cout << cube [1] << endl;
cout << cube [2] << endl;
cout << cube [3] << endl;
cout << cube [4] << endl;
cout << cube [5] << endl;
cout << cube [6] << endl;
cout << cube [7] << endl;
cout << cube [8] << endl;
cout << cube [9] << endl;
//a Programming crime here
 int temp1 = cube [0];
 int temp2 = cube [1];
 int temp3 = cube [2];
 int temp4 = cube [3];
 int temp5 = cube [4];
exchange (cube[0],cube[9]);
exchange (cube[9],temp1);
exchange (cube[1],cube[8]);
exchange (cube[8],temp2);
exchange (cube[2],cube[7]);
exchange (cube[7],temp3);
exchange (cube[3],cube[6]);
exchange (cube[6],temp4);
exchange (cube[4],cube[5]);
exchange (cube[5],temp5);
//the new output
cout << "**************************************" << endl;
cout << cube [0] << endl;
cout << cube [1] << endl;
cout << cube [2] << endl;
cout << cube [3] << endl;
cout << cube [4] << endl;
cout << cube [5] << endl;
cout << cube [6] << endl;
cout << cube [7] << endl;
cout << cube [8] << endl;
cout << cube [9] << endl;
return 0;
}