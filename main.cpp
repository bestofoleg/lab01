#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};

int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    Base base;
	
	cout << "* Create Object base1" << endl;
    Base base1;

    return 0;
}
