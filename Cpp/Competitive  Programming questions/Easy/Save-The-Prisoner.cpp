#include <iostream>

using namespace std;


int main()
{
    int t, n, m, s;
    cin >> t;
    for(int i=0; i< t;i++)
    {
        cin >> n >> m >> s;
        cout<<(s-1+m-1)%n+1<<"\n"; // One liner to save time complexity to 1
        /**
        The S-1 translates the prisoner id to an equivalent index (since % effectively deals with indexes like 0..N-1). The M-1 handles
	the fact that the first prisoner to get a sweet is not counted when giving away sweets. Example, if you are giving away 1 sweet a
	nd you start at prisoner 37, it is 37 = (37 + 1 - 1) that should be warned. If you are giving away 2 sweets it is 38 = (37 + 2 -
	1) that should be warned. And so on. The % N handles the wrapping around based on the index of the prisoners. And the + 1 brings
	us back to dealing with prisoner ID's instead of indicies.
        **/
        // Original Solution below
        // for(int i=0, j=s; i< m; i++, j++)
        // {
        //     if(j == n-1)    
        //         j=0;

        //     if(i == m-1)
        //         cout << j;
        // }

    }

}
