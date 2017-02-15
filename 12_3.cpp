//pointers to structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
       string title;
       int year;
};

int main()
{
    string mystr;
    movies_t amovie;
    movies_t *pmovie;
    pmovie = &amovie;
    cout << "Enter title: ";
    getline(cin, pmovie->title);
    cout << "Enter year: ";
    getline(cin, mystr);
    (stringstream)mystr >> pmovie->year;
    
    cout << endl << "You have entered:" << endl;
    cout << pmovie->title;
    cout << " (" << pmovie->year << ")" << endl;
    getchar();
    return 0;
}
