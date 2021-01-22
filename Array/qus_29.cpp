#include <bits/stdc++.h>
using namespace std;


void trapWater(int arr[], int n)
{
    int l=0,r=n-1;
    int ml =0,mr=0;
    int ans = 0;
    while(l<=r)
    {
        if(arr[l]<arr[r]){
            if(arr[l]>ml){
                ml = arr[l];
            }
            else{
                ans =ans+(ml-arr[l]);
            }
            l++;
        }
        else{
            if(arr[r]>mr){
                mr=arr[r];
            }
            else{
                ans =ans+(mr-arr[r]);
            }
            r--;
        }
    }
    cout<<ans;
}

int main(){
    int arr[] = {3,0,0,2,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    trapWater(arr,n);
    return 0;
}