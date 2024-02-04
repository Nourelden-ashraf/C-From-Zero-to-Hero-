#include <iostream>
using namespace std;
int num;
int i = 0;
int j = 0;
int main () {
    cout << "Enter how many arrays elements u want";
    cin >> num;
int cube[num];
for (; i < num; i++){
cube[i] = i;
cout << cube [i] << endl;
}
cout << "***********************";
cout << "***********************";
cout << "***********************"; 
swap(num,j);
for (; j > num; j--){
    cout << cube [j] << endl;
}
cout << cube [j] << endl;    
return 0;
}