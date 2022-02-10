#include <iostream>
using namespace std;

int fibonacci(int a)
{
    if(a>1){
        return fibonacci(a-1)+fibonacci(a-2);
    }
    return a;
}

int main(){
    fibonacci(5);
    fibonacci(12);

    return 0;
}