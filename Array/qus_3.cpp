#include<iostream>
#include<algorithm>
using namespace std;



int Kthsmall(int n,int arr[], int k)
{
    sort(arr, arr+n);
    return arr[k-1];
}


int main(){
    int arr[] = {1, 4, 2, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    cout<<"Smallest value of array "<<Kthsmall(n,arr,k);
    return 0;
}