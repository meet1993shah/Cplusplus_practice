//abstract base class
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
    CRectangle rect;
    CTriangle trgl;
    CPolygon *poly1 = &rect;
    CPolygon *poly2 = &trgl;
    poly1->set_values(4,5);
    poly2->set_values(4,5);
    cout << poly1->area() << endl;
    cout << poly2->area() << endl;
    getchar();
    return 0;
}
