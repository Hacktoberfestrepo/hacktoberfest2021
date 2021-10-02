#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.first < p2.first;
}

/*sample input
1
4
4 4
5 2
11 5
15 10
25 10
*/

int main(){

    int t,n,d,f,D,F;
    cin>>t;

    while(t--){
        cin>>n;

        vector<pair<int,int>> v;  //using it for storing distances from truck
        priority_queue<int> pq;   //using it for storing fuels of every gas station

        for(int i=0; i<n; i++){
            cin>>d>>f;
            v.push_back(make_pair(d,f));
        }

        cin>>D>>F;

        for(int i=0; i<n; i++){
            v[i].first = D - v[i].first;
        }

        sort(v.begin(),v.end(),compare);

        int prev = 0;   //previous city distance
        int curr = 0;   //current city number
        int flag = 0;
        int ans = 0;

        while(curr<n){
            //if we are able to go to the next city
            if(F >= (v[curr].first) - prev){

                //reduce the fuel 
                F = (v[curr].first - prev);
                pq.push(v[curr].second);
                prev = v[curr].first;
            }
            else{
                if(pq.empty()){
                    flag = 1;
                    break;
                }
                
                //try to refule with the previous added fuels in pq
                F += pq.top();
                //remove from pq
                pq.pop();
                //incresing the ans
                ans++; 
                //go to the next city
                continue;  
            }
            curr++;
        }

        //cover the distance after the last gas station 

        if(flag == 1){
            cout<<-1<<endl;
            continue;       //go for the next testcase
        }

        D = D - v[n-1].first;

        if(F>=D){
            cout<<ans<<endl;
            continue;
        }

        while(F<D){
            //trying to refuel the truck by previous fuels in pq
            if(pq.empty()){
                flag = 1;
                break;
            }

            F += pq.top();
            pq.pop();
            ans++;
        }

        if(flag==1){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<ans<<endl;
        }

    }

    return 0;
}