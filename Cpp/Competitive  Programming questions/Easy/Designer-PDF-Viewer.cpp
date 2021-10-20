#include <iostream>

using namespace std;

int main()
{
    int n = 26;
    int height[n];
    for(int i=0; i< n;i++)
    {
        cin >>height[i];
    }
    string word;
    cin >> word;
    for(int i=0; i< word.length();i++)
    {
        for(int j=0; j< word.length()-i-1;j++)
            if(word[j] > word[j+1])
                swap(word[j], word[j+1]);
    }
    int max = 1;
    for(int i=97, j=0; i < (97+n); i++)
    {
        if(int(word[j]) == i)
        {
            int index = i - 97;
            if(max < height[index])
                max = height[index];
            j++;
            while(true)
            {
                if(word[j-1] == word[j])
                    j++;
                else
                    break;
            }
        }
    }
    cout << max*word.length();
}

