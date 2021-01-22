#include<iostream>
using namespace std;

void minSwap(int arr[], int n , int k)
{
    int counter = 0;
    int l =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            l++;
            counter++;
        }
    }
    cout<<counter;
}

int main(){
    int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    minSwap(arr,n,k);
    return 0;
}