#include <iostream>

using namespace std;

int main()
{
    int s=0,t=0,a=0,b=0,m=0,n=0,count_inbound_apples=0,count_inbound_oranges=0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int apples[m], oranges[n];
    for(int i=0; i<m;i++)
    {
        cin >> apples[i];
        apples[i]+=a;
        if(apples[i] >= s && apples[i] <=t)
            count_inbound_apples++;
    }
    for(int i=0; i<n;i++)
    {
        cin >> oranges[i];
        oranges[i]+=b;
        if(oranges[i] >= s && oranges[i] <=t)
            count_inbound_oranges++;
    }
    cout << count_inbound_apples << '\n' << count_inbound_oranges << '\n';
}
