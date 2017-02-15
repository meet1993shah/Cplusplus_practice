// My first pointer

#include <iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int* mypointer;
    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "Firstvalue is " << firstvalue << endl;
    cout << "Secondvalue is " << secondvalue << endl;
    getchar();
    return 0;
}
