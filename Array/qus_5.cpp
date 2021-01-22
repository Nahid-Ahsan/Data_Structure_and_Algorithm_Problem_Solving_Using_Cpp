#include<iostream>
using namespace std;

void NegToPos(int arr[], int n)
{
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
                
            }
            j++;
        }
    }
}

void PrintArr(int arr[],int n)
{
    for(int i=0;i<n;i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int array[] = {-4, 5,-2,-9,10,-5};
    int n = sizeof(array)/sizeof(array[0]);
    NegToPos(array,n);
    PrintArr(array,n);
    return 0;
}