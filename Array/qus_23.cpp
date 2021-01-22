#include<iostream>
#include<map>
using namespace std;

void maxProduct(int arr[],int n)
{
    int maxVal = arr[0];
    int minVal = arr[0];
    int maxPro = arr[0];
    
    for(int i =1;i<n;i++)
    {
        if(arr[i]<0)
            swap(maxVal,minVal);

        maxVal = max(arr[i], maxVal*arr[i]);
        minVal = min(arr[i],minVal*arr[i]);

        maxPro = max(maxPro, maxVal);
    }
    cout<<maxPro;
}

int main(){
    int arr[] = {2, 3, 4, 5, -1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxProduct(arr,n);
    return 0;
}