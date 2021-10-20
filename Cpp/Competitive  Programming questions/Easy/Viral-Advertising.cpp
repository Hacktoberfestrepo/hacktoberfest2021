#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int people = 5,cumulative = 0;
    for(int i=0; i< n;i++)
    {
	    people = floor(people/2);
	    cumulative += people;
	    people*=3;
    }
    cout << cumulative;
}
