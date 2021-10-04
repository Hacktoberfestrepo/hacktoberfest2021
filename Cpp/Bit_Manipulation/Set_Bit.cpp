#include <iostream>
using namespace std;

int setbit(int n, int pos){
    return(n | (1<<pos));
}

int main(int argc, const char * argv[]) {
    cout<<setbit(5, 1)<<endl;
    return 0;
}
