//vetors: overloading operators example
#include <iostream>
using namespace std;

class CVector
{
      public:
             int x,y;
             CVector(void){};
             CVector(int, int);
             CVector operator + (CVector);
};

CVector::CVector(int a, int b)
{
                     x = a;
                     y = b;
}

CVector CVector::operator + (CVector param)
{
        CVector temp;
        temp.x = x + param.x;
        temp.y = y + param.y;
        return(temp);
}

int main()
{
    CVector a(3,2);
    CVector b(6,3);
    CVector c;
    c = a + b;
    cout << c.x << "," << c.y << endl;
    getchar();
    return 0;
}
             
