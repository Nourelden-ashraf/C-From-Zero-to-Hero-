#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string inputString;
    
    cout << "Enter a string: ";
    getline(cin, inputString);
    
    transform(inputString.begin(), inputString.end(), inputString.begin(), ::toupper);
    
    cout << "Uppercase string: " << inputString << endl;
    
    return 0;
}