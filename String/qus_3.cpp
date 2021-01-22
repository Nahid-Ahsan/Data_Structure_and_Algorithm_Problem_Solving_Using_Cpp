#include <bits/stdc++.h>
using namespace std;

void dupStr(string s)
{
    int n = s.length();
    int freq[26];

    for(int i =0;i<26;i++)
    {
         freq[i]=0;
    }

    for(int i =0;i<n;i++)
    {
        freq[s[i]-'a']++;
    }

    char ans ='a';
    int dup = 0;

    for(int i =0;i<26;i++)
    {
        if(freq[i] > 1)
        {
            ans = i + 'a';
            dup = freq[i];
            cout<<ans<<" "<<dup<<endl;
        }
       
    }

    
}

int main(){
    string s = "geeksforgeeks";
    dupStr(s);
    return 0;
}