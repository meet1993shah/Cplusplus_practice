//default values in function

#include <iostream>
using namespace std;

int divide(int a, int b = 2)
{
    int r;
    r = a / b;
    return (r);
}

int main()
{
    cout << divide(12) << endl;
    cout << divide(5) << endl;
    cout << divide(12,7) << endl;
    cout << divide(20,4) << endl;
    getchar();
    return 0;
}
