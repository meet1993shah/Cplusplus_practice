//break loop example

#include <iostream>
using namespace std;

int main()
{
    int n;
    for (n = 10; n > 0; n--)
    {
        cout << n << ", ";
        if (n == 3)
        {
              cout << "Countdown Aborted!";
              break;
        }
    }
    getchar();
    return 0;
}
