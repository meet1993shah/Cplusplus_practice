//dynamic allocation and polymorphism
#include <iostream>
using namespace std;

class CPolygon
{
      protected:
                int width, height;
      public:
             void set_values(int a, int b)
             {
                  width = a;
                  height = b;
             }
             virtual int area(void) = 0;
             void printarea(void)
             {
                  cout << this->area() << endl;
             }
};

class CRectangle: public CPolygon
{
      public:
             int area(void)
             {
                 return (width*height);
             }
};

class CTriangle: public CPolygon
{
      public:
             int area(void)
             {
                 return (width*height/2);
             }
};

int main()
{
    CPolygon *poly1 = new CRectangle;
    CPolygon *poly2 = new CTriangle;
    poly1->set_values(20,5);
    poly2->set_values(40,8);
    poly1->printarea();
    poly2->printarea();
    delete poly1;
    delete poly2;
    getchar();
    return 0;
}
                  
