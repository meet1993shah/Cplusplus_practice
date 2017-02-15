//constructors and derived classes
#include <iostream>
using namespace std;

class mother
{
      public:
             mother(void)
             {
                         cout << "mother: no parameters" << endl;
             }
             mother(int a)
             {
                        cout << "mother: int parameter" << endl;
             }
};

class daughter: public mother
{
      public:
             daughter(int a)
             {
                          cout << "daughter: int parameter" << endl;
             }
};

class son: public mother
{
      public:
             son(int a):mother (a)
             {
                     cout << "son: int parameter" << endl;
             }
};

int main()
{
    daughter cynthia(0);
    son daniel(0);
    getchar();
    return 0;
}
