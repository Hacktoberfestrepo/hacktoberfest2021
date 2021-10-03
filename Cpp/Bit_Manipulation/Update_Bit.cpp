#include <iostream>
using namespace std;

int updatebit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main(int argc, const char * argv[]) {
    cout<<updatebit(5, 1, 1)<<endl;
    return 0;
}
