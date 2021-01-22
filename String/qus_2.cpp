#include<iostream>
#include<string>
using namespace std;

void isPalin(string s)
{
   

    int n = s.length();

    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1])
        {
            printf("Not Palindrome"); 
            return;
        }
    }

    cout<<"Palindrom";
}

int main(){
    
    string s = "tenet";
    isPalin(s);


    return 0;
}