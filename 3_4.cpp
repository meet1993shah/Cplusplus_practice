//sizeof function

#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, a4, a5, a6;
    a1 = sizeof(char);
    a2 = sizeof(int);
    a3 = sizeof(short);
    a4 = sizeof(long);
    a5 = sizeof(float);
    a6 = sizeof(double);
    cout << a1 << endl << a2 << endl << a3 << endl << a4 << endl << a5 << endl << a6;
    getchar();
    
    return 0;
}
