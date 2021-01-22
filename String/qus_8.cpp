#include <bits/stdc++.h>
using namespace std;

void printstr(string s1, int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        cout<<s1[i];
    }
}

void longestPanlin(string s)
{
    int l,r;
    int start=0;
    int end=l;

    for(int i =1;i<s.length();i++)
    {
        

          //even palindrom
        l = i-1;
        r =i;

        while(l>=0 && r<s.length() && s[l]==s[r])
        {
            if(r-l+1>end)
            {
                start = l;
                end = r-l+1;
            }
            l--;
            r++;
        }

        //odd palindrom
        l = i-1;
        r = i+1;

       
        while(l>=0 && r<s.length() && s[l]==s[r])
        {
            if(r-l+1>end)
            {
                start = l;
                end = r-l+1;
            }
            l--;
            r++;
        }
    }

    printstr(s,start,end+start-1);
}


int main(){
    string s = "aaabbaa";
    longestPanlin(s);
    return 0;
}