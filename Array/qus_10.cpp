#include <bits/stdc++.h>
using namespace std;

int minJump(int arr[], int n)
{
    
    if (n == 1) 
        return 0;
        
    int step = INT_MAX;
    
    for(int i = n-2;i>=0;i--)
    {
        if(i + arr[i]>= n-1)
            {
                int sub_step = minJump(arr,i+1);
                if(sub_step != INT_MAX)
                    step = min(step,sub_step+1);

            }
    }
    return step;
}

int main(){

    int arr[] = {1,4,3,2,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minJump(arr,n);
    
    return 0;
}