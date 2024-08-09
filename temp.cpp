#include <iostream>
using namespace std;

int main()
{
     int x = 1;
     int &y = x;
     cout << "This is x " << x << endl
          << "This is y " << y << endl;
     x = 3;
     cout << "This is new x " << x << endl
          << "This is new y " << y;
     return 0;
}
