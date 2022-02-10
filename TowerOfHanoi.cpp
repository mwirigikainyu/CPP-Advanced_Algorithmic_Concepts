#include <iostream>
using namespace std;

void TowerOfHanoi(int disks,int Tow1, int Tow2, int Tow3)
{
    if(disks>0){
        TowerOfHanoi(disks-1,Tow1,Tow3,Tow2);
        cout<<"Move from "<<Tow1<<" to "<<Tow3<<endl;
        TowerOfHanoi(disks-1,Tow2,Tow1,Tow3);
    }
}

int main()
{
    TowerOfHanoi(3,1,2,3);

    return 0;
}