

#include <iostream>
#include<bits/stdc++.h>
using namespace std;



void RecMinMax(int arr[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0;i<n;i++)
    {
        if(min>arr[i])
            min = arr[i];
        
        if(max < arr[i])
            max = arr[i];
    }
    cout<<min<<" "<<max; 
}


int main()
{

    int arr[] = {1, 3, 10, 15, 0};
    int n = 5;
    

    RecMinMax(arr,n);
    
    

    return 0;
} 