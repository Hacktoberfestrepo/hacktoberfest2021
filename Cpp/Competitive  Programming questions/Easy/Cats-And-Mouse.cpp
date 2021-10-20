#include <iostream>

using namespace std;

int main()
{
    // x -> cat 1, y -> cat 2, z -> mouse
    int n;
    int x, y, z;
    cin >> n;
    for(int i=0; i< n; i++)
    {
        cin >> x >> y >> z;
        if(abs(x - z) == abs(y-z))
            printf("Mouse C\n");
        else if(abs(x - z) > abs(y - z))
            printf("Cat B\n");
        else if(abs(y - z) > abs(x - z))
            printf("Cat A\n");
    }
}
