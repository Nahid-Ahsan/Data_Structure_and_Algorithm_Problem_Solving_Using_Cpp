#include <bits/stdc++.h>
using namespace std;
void ChocoDis(int arr[],int n,int m)
{
    sort(arr,arr+n);
    int min = INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int d = arr[i+m-1]-arr[i];
        if(d<min)
            min = d;
    }
    cout<<min;
}


int main(){
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 5;
    ChocoDis(arr,n,m);
    return 0;
}