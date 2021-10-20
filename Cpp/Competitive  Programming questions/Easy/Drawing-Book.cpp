#include <iostream>

using namespace std;

int main()
{
    int n,p;
    cin >> n >> p;
    int count_page_flips=0;
    if(p/2 <= (n-p)/2)
    {
        for(int i=1;i<p;i+=2)
        {
            if(i < p && i!=p)
                count_page_flips++;
        }
    }
    else
    {
        if((n-p) == 1 && n % 2 == 0)
        {
            cout << 1;
            exit(0);
        }
        for(int i=n-1;i>p;i-=2)
        {
            if(i > p && i != p)
                count_page_flips++;
        }
    }
    cout << count_page_flips;
}

