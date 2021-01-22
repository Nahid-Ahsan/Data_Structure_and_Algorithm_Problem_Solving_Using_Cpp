#include <bits/stdc++.h>
using namespace std;

void isRotate(string s1, string s2)
{
    if(s1.length()!=s2.length())
        cout<<"This are not ratation each other";
    else
    {
        string temp = s1+s2;
        if(temp.find(s2)!=string::npos)
            cout<<"This are ratation each other";
    }
    
}

int main(){
    string s1 = "ABCD";
    string s2 = "CDAB";

    isRotate(s1,s2);

    return 0;
}

