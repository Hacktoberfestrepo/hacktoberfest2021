// Count all occurances of anagrams of str1 present in str2
// SAMPLE INPUT:
// str2 = forxxorfxdofr
// str1 = for
// SAMPLE OUTPUT: 
// Output: 3
// for, orf and ofr are anagrams of str1 present in str2 
#include <bits/stdc++.h>
using namespace std;

int search(string str1, string str2) {
    unordered_map<char, int> mp;
    for(char x: str1){
        mp[x]++;
    }
    int count = mp.size(), ans=0;
    int i=0,j=0,k = str1.length();
    while(j < str2.length()){
        if(mp.find(str2[j])!= mp.end()){
             mp[str2[j]]--;
             if(mp[str2[j]] == 0)
              count--;
        }
        if(j-i+1 < k) j++;
        else if(j-i+1 == k){
            if(count == 0) ans++;
            if(mp.find(str2[i])!=mp.end()){
                if(mp[str2[i]] == 0)
                 count++;
                mp[str2[i]]++;
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str2 >> str1;
        auto ans = search(str1, str2);
        cout << ans << "\n";
    }
    return 0;
} 