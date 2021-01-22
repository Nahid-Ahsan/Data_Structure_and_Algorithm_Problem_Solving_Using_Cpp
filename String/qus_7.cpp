#include <bits/stdc++.h>
using namespace std;

string CountSay(int n)
{


    if (n == 1)
        return "1";
    if (n == 2)
        return "11";

    string s = "11";

    for (int j = 3; j <= n; j++)
    {
        string t = "";
        s = s + '&';
        int cnt = 1;

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[i - 1])
            {
                t = t + to_string(cnt);
                t = t + s[i - 1];
                cnt = 1;
            }
            else
            {
                cnt++;
            }

            
        }
        s = t;
        
    }
    return s;
};

int main()
{
    int n = 4;
    cout<<CountSay(n);
    return 0;
}