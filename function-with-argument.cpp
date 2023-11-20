#include <iostream>
using namespace std;
void kaka (string msg = "hello", string name = "Unknown", int age = 0) {
    cout << msg << " "<< name << endl ;
    cout << name << "  "<< "is" << "  "<< age << endl ;
      
    }
int main () {
    kaka ("hello","nour",30);
    kaka ("hello","mohamed",34);
    kaka ("hello", "ashraf",65);
    kaka ("hello", "eyad",12);
    kaka ("hello");
    
return 0;
    }