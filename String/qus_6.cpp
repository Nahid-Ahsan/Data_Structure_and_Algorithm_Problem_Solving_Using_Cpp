#include <bits/stdc++.h>
using namespace std;

void suffleStr(string s1, string s2, string result)
{
    if(s1.length() + s2.length() != result.length())
        cout<<"Not Valid";
    
    int i=0,j=0,k=0;

    while(k!= result.length())
    {
        if(i<s1.length() && s1.at(i) == result.at(k))
            i++;
        else if(j<s1.length() && s1.at(j) == result.at(k))
            j++;

        else
            cout<<"Not Valid";
        
        k++;
    }

    if(i<s1.length() || j<s2.length())
        cout<<"Not Valid";

    cout<<"Valid";

}

int main(){
    
    string s1 = "XY";
    string s2 = "12";
    string s3 = "1XY2";
    suffleStr(s1,s2,s3);
    return 0;
}