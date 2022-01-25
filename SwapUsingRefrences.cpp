#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int z;
    z = x;
    x = y;
    y = z;
}

int main(){
    int a = 16;
    int b = 21;
    cout << "Before swap " << a << " " << b <<endl;
    swap(a, b);
    cout<<"After swap " <<a <<" " <<b <<endl;

    return 0;
}