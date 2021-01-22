#include<iostream>
#include<algorithm>

using namespace std;


int maxSum(int arr[], int n)
{
    int cur_sum = arr[0], max_sum = arr[0];
    for(int i = 1;i<n;++i)
    {
        
        cur_sum = max(cur_sum + arr[i], arr[i]);
        max_sum = max(max_sum,cur_sum);
    }

    cout<<max_sum<<endl;
    
}

int main(){
    int arr[] = {1,2,3,-2,5};
    // int arr[] = { 1,2,1,-4};
    int n= sizeof(arr)/sizeof(arr[0]);
   
    maxSum(arr,n);
    return 0;
}