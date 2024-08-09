#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     int a = 2;
     int b = 33;
     cout << "This is a without setw: " << a << endl;
     cout << "This is b without setw: " << b << endl
          << endl;
     cout << "This is a with setw: " << setw(2) << a << endl;
     cout << "This is b with setw: " << setw(2) << b << endl;
     0;
}
