#include<iostream>
#include<string>
using namespace std;

void reverseStr(string& s)
{
    int n = s.length();

    for(int i=0;i<n/2;i++)
    {
        swap(s[i],s[n-i-1]);
    }
  
    

    

}

int main(){
    string str = "nahid";
    reverseStr(str);
    cout<<str;
    return 0;
}