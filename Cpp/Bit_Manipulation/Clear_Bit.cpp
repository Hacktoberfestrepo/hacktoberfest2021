#include <iostream>
using namespace std;

int clearbit(int n, int pos){
    int mask = ~(1<<pos);
    return(n & mask);
}

int main(int argc, const char * argv[]) {
    cout<<clearbit(5, 2)<<endl;
    return 0;
}
