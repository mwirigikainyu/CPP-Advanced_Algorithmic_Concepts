#include <iostream>
using namespace std;

//recursion with printing done at ascension / calling time
void fun1(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fun1(n - 1);
    }
}

//recursion with printing done during descension / returning time
void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        cout << n << endl;
    }
}

//sum of first n natural numbers using recursion
//ideally the formula is: (n(n+1))/2 but you can use recursion:
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}

int main()
{
    int a = 4; 
    fun1(a);

    return 0;
}