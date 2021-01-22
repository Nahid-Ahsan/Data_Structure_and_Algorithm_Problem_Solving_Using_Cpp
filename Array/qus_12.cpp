#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArr(int arr[], int n)
{ 
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void MergeArr(int a1[], int n, int a2[], int m)
{
    int i = n-1;
    int j = 0;
    while(i>=0 && j<m)
    {
        if(a1[i]>=a2[j])
        {
            swap(a1[i],a2[j]);
        }
        else
            break;

            i--;
            j++;
    }

    sort(a1,a1+n);
    sort(a2,a2+m);
    for(int i = 0;i<n;i++)
    {
        cout<<a1[i]<<" ";
    }

    for(int i = 0;i<m;i++)
    {
        cout<<a2[i]<<" ";
    }

}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    MergeArr(arr1,n, arr2,m);
    return 0;
}