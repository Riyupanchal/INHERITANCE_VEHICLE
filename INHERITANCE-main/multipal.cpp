#include <iostream> //multiple inheritence
using namespace std;

class Father
{
public:
    void fatherProperty()
    {
        cout << "Father's property" << endl;
    }
};

class Mother
{
public:
    void motherProperty()
    {
        cout << "Mother's property" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void childFunction()
    {
        cout << "Child function" << endl;
    }
};

int main()
{
    Child c;
    
    c.fatherProperty();
    c.motherProperty();
    c.childFunction();

    return 0;
}
