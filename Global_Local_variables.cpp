#include <iostream>
using namespace std;

int a = 100;
int b = 200;

int second()
{
  cout << a << " Coming From Second Function\n";
  cout << b << " Coming From Second Function\n";
  return 0;
}

int main()
{
  cout << a << " Coming From Main Function\n";
  cout << b << " Coming From Main Function\n";
  return 0;
}