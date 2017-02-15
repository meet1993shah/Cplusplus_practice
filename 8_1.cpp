//array example

#include <iostream>
using namespace std;

int billy [] = {16, 2, 77, 40, 12071};
int n, results = 0;

int main()
{
    for (n = 0; n < 5; n++)
    {
        results += billy[n];
    }
    cout << results;
    getchar();
    return 0;
}
 
