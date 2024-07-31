#include <iostream>
using namespace std;

int a = 2;

int main()
{
    int a = 1;
    cout << "a inside function is " << a << endl;
    cout << "a outside function is " << ::a << endl;
    return 0;
}
