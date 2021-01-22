#include<iostream>
#include<algorithm>
using namespace std;

int DuplicateNum(int arr[],int n)
{
    
    sort(arr,arr+n);
    int i;
    for(i=0;i<n;i++)

    {
        if(arr[i]==arr[i+1])
            break;
    }
    return arr[i];
}

int main(){
    int arr[]={3,1,3,4,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<DuplicateNum(arr,n);
    return 0; 
}