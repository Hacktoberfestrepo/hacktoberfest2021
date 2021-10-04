#include <iostream>
using namespace std;

int getbit(int n, int pos){
    return((n & (1<<pos))!=0);
}

int main(int argc, const char * argv[]) {
    cout<<getbit(5, 2)<<endl;
    return 0;
}