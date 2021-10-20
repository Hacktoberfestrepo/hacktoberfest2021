#include <iostream>

using namespace std;

int main()
{
    int x1,v1,x2,v2;
    cin >> x1 >> v1;
    cin >> x2 >> v2;
    if((x1 > x2) && (v1 > v2))
        cout << "NO";
    else if((x1 < x2) && (v1 < v2))
        cout << "NO";
    else if(v1 > v2)
    {
        int x1_distance=x1,x2_distance=x2;
        while(x1_distance < x2_distance)
        {
            x1_distance+=v1;
            x2_distance+=v2;
        }
        if(x1_distance == x2_distance)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
}

