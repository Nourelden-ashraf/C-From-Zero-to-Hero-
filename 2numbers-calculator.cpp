#include <iostream>
using namespace std;
float x, y;
int choice;
void multiply () {
cout << x * y << endl << "***************************************\n";
}
void divide () {
cout << x / y << endl << "***************************************\n";
}
void sum () {
cout << x + y << endl << "***************************************\n";
}
void sub () {
cout << x - y << endl << "***************************************\n";
}
int main () {
    cout << "Welcome to my programm u can use it for adding,multiplying,subtracting,dividing any 2 numbers\n" << "***************************************\n";
    cout << "Enter the two 2 numbers\n" << "the first number?\n";
    cin >> x;
    cout << "the second number?\n";
    cin >> y;
cout << "what do u want to do\n" << "enter 1 for adding\n" << "enter 2 for subtracting\n" << "enter 3 for multiplying\n" << "enter 4 for dividing\n";
cin >> choice;
switch (choice) {
case 1:
sum (); 
break;
case 2:
sub ();
break;
case 3:
multiply ();
break;
case 4:
divide ();
break;
}

cout << "Thank you for using my programm";
    return 0;
}