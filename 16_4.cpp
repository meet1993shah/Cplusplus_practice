//pure virtual members can be called
//from the abstract base class
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
    CRectangle rect;
    CTriangle trgl;
    CPolygon *poly1 = &rect;
    CPolygon *poly2 = &trgl;
    poly1->set_values(50,5);
    poly2->set_values(20,8);
    poly1->printarea();
    poly2->printarea();
    getchar();
    return 0;
}
                  
