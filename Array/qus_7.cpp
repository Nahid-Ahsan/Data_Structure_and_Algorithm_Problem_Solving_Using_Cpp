#include<iostream>
using namespace std;
void cyclicaArr(int arr[],int n)
{
    int x = arr[n-1];
    for (int i=n-1;i>0;i--)
    {
       arr[i] = arr[i-1];
       
    }
    arr[0] = x;
}
void printArr(int arr[], int n)
{ 
    for(int i = 0;i<n;i++)
    {  
        cout<<arr[i]<<" ";
    }
}

//We can also solve this problem usig STL function called "rotation".
//rotation(arr.begin(),arr.begin()+arr.size()-k,v.end())  ##right-shift
//rotation(arr.begin(),arr.begin()+arr.size()+k,v.end())  ##left-shift

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cyclicaArr(arr,n);
    printArr(arr,n);
    return 0;
}