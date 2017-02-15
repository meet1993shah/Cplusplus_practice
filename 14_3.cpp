//static members in classes
#include <iostream>
using namespace std;

class CDummy
{
      public:
             static int n;
             CDummy(void)
             {
                         n++;
             }
             ~CDummy(void)
             {
                          n--;
             }
};

int CDummy::n=0;

int main()
{
    CDummy a;
    CDummy b[5];
    CDummy *c = new CDummy;
    cout << a.n << endl;
    delete c;
    cout << CDummy::n << endl;
    getchar();
    return 0;
}
