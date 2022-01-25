#include <iostream>
#define LIMIT 10  //macro directive
#define AREA(x,y) (x*y) //macro directive with arguments
#define PI 3.145
#define MSG(msg) #msg //converts any literal to string

int main(){
    int n = 8;
    int m = 9;
    for (int i = 0; i<LIMIT; i++){
        n++;
    }
    int area = AREA(n,m);
    std::cout<<n<<" "<<area<<PI<<std::endl;
    std::cout<<MSG(Hello);

    return 0;
}