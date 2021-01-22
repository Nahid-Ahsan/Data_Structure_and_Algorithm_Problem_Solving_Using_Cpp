#include<iostream>
#include<algorithm>

using namespace std;

int KadaneAlgo(int arr[],int n)
{    
    int max_start = 0;
    int end_max = 0;
    
    for(int i=0;i<n;i++)
    {
        end_max = end_max + arr[i];
        if(max_start<end_max)
            max_start = end_max;

        if(end_max<0)
            {
                sort(arr, arr+n);
                max_start = arr[n-1];
            }
    }
    return max_start;
}



int main(){
    int arr[] = {1,2,3,-2,5};
    // int arr[] = { 1,2,1,-4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max_sum = KadaneAlgo(arr,n);
    cout<<max_sum;

    return 0;
}