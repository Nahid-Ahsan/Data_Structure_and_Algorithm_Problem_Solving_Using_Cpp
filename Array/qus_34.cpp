#include<iostream>
using namespace std;

int palidArr(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int ans =0;
        int temp =arr[i];
        while(temp>0)
        {
            int rem = temp%10;
            temp/=10;
            ans = (ans*10)+rem;
        }
        if(ans!=arr[i])
            return 0;
        
    }
    return 1;
}

int main(){
    int arr[] = {111, 222, 333, 444, 555};
    int n = sizeof(arr)/sizeof(arr[0]);
    palidArr(arr,n);
    return 0;
}