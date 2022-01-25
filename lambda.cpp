#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {-20, -10, 5, 3, -30};
    int n = sizeof(arr) / sizeof(arr[0]);
    //lambda expression
    auto myCompare = [](int a, int b){ return abs(a) < abs(b); }; 
    sort(arr, arr+n, myCompare);
    for(auto x:arr){ cout<<x<<endl; }

    return 0;
}