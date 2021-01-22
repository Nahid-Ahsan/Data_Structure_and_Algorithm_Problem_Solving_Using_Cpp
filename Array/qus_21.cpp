#include<iostream>
#include<map>
using namespace std;

void subArr(int arr[],int n)
{
    int f=0;
    int s =0;
    map<int,int> m;
    for(int i =0;i<n;i++)
    {   
        s = s+arr[i];
        if(s==0 or m[s] or arr[i]==0)
        {
            f = 1;
            break;
        }
        else
        {
            m[s]=1;
        }
    }

    if(f==1)
    {
        cout<<"YES\n";
    }

    else if(f==0)
     {
        cout<<"NO\n";
     }
}

int main(){
    int arr[] = {4,2,-3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    subArr(arr,n);
    return 0;
}