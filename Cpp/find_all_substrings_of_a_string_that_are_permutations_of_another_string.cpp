//Find all substrings of a string that are a permutation of another string



#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
// Function to find all substrings of string 'X' that are
// permutations of string 'Y'
void findAllAnagrams(string X, string Y)
{
    // `m` and `n` store the length of the string 'Y' and 'X', respectively
    int m, n;
 
    // invalid input
    if ((m = Y.length()) > (n = X.length())) {
        return;
    }
 
    // maintains the count of characters in the current window
    unordered_multiset<char> window;
 
    // maintains the count of characters in the second string
    unordered_multiset<char> set;
 
    // insert all characters of string 'Y' into a set
    for (int i = 0; i < m; i++) {
        set.insert(Y[i]);
    }
 
    // Note that `std::unordered_multiset` or `std::multiset` can maintain
    // duplicate elements unlike `std::unordered_set` or `std::set`
 
    // maintain a sliding window of size `m` with adjacent characters
    // of string 'X'
    for (int i = 0; i < n; i++)
    {
        // add first `m` characters of string 'X' to the current window
        if (i < m) {
            window.insert(X[i]);
        }
        else {
            // If all characters in the current window match that of the
            // string 'Y', we found an anagram
            if (window == set)
            {
                cout << "Anagram " << X.substr(i - m, m) <<
                        " present at index " << i - m << endl;
            }
 
            // consider the next substring of 'X' by removing the leftmost element of
            // the sliding window and add the next character of string 'X' to it
 
            // delete only "one" occurrence of the leftmost element of
            // the current window
            auto itr = window.find(X[i - m]);
            if (itr != window.end()) {
                window.erase(itr);
            }
 
            // insert the next character of the string 'X' into the current window
            window.insert(X[i]);
        }
    }
 
    // if the last `m` characters of string 'X' matches that of string 'Y',
    // we found an anagram
    if (window == set)
    {
        cout << "Anagram " << X.substr(n - m, m) <<
                " present at index " << n - m << endl;
    }
}
 
int main()
{
    string X = "XYYZXZYZXXYZ";
    string Y = "XYZ";
 
    findAllAnagrams(X, Y);
 
    return 0;
}

