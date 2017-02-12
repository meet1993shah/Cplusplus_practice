// countdown using a for loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the starting number: ";
    cin >> n;
    for (; n > 0; n--)
    {
        cout << n << ", ";
    }
    cout << "FIRE!\n";
    getchar();
    getchar();
    return 0;
}
