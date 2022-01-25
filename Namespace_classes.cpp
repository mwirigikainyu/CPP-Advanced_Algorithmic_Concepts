#include <iostream>
using namespace std;

namespace ns
{
    // Only declaring class here
    class geek;

    //or can declare and define inside
    /* 
    class geek{
    public:
        declaring prototype:
        ---> void display();

        void display()
        {
            cout << "ns::geek::display()\n";
        }
    }; 
    */
}

// Defining class outside
class ns::geek
{
public:
    void display()
    {
        cout << "ns::geek::display()\n";
    }
};

/*
defining the member functions outside
---> void ns::geek::display()
{
    cout << "ns::geek::display()\n";
}
*/

int main()
{
    //Creating Object of geek Class
    ns::geek obj;
    obj.display();
    return 0;
}