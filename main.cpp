#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n";
		cout<<"Some changes in Child";
	}
    ~Child() { cout << "Destruct Child object\n"; }
};

int main(int argc, char *argv[])
{
    cout << "* Create Object child" << endl;
    Child child;

    return 0;
}
