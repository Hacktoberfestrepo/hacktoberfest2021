#include<bits/stdc++.h>
using namespace std;
class Knap{
    public:
    int weight;
    int value;
    Knap(int a, int b){
        weight = a;
        value = b;
    }
};
bool cmp(Knap a, Knap b){
    return (((double)a.value/a.weight) > ((double)b.value/b.weight));
}
int main(){
    vector<Knap> v;
    double w = (double)50;
    double val = (double)0;
    int a;
    int b;
    cout<<endl<<endl;
    cout<<"Enter the weight and value respectively : "<<endl;
    for(int i=0; i<3; i++){
        cin>>a>>b;
        v.push_back(Knap(a,b));
    }
    sort(v.begin(), v.end(), cmp);
    int i = 0;
    for(; i<3; i++){
        if((double)(v.at(i).weight) <= w){
            w = w - (double)(v.at(i).weight);
            val = val + (double)(v.at(i).value);
        }
        else{
            break;
        }
    }
    if(w > (double)0){
        val = val + (w / (double)(v.at(i).weight))*(double)(v.at(i).value);
    }
    w = (double)0;
    cout<<"The total value in the Knapsack is : "<<val<<endl;
    cout<<endl<<endl;

    return 0;
}