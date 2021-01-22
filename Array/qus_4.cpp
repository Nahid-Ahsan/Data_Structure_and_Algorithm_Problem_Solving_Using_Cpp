#include<iostream>
using namespace std;

int swap(int *a,int  *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Sort012s(int arr[], int n)
{
    int l = 0;
    int h = n-1;
    int mid = 0;

    while( mid<= h)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[l++],arr[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid],arr[h--]);
            break;
        default:
            break;
        }
    }

}

// another optimal appraoch is:
void Sort012(int arr[], int n)
{
    int c0 = 0, c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            c0++;

        else if(arr[i]==1)
            c1++;
        else
            c2++;
        
    }

    int i = 0;
    for( i = 0;i<c0;++i)
    {
        arr[i]=0;
    }
    for( i =c0;i<c0+c1;++i)
    {
        arr[i]=1;
    }
    while(c2--)
    {
        arr[i++]= 2;
    }

    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
}


void printArray(int arr[], int arr_size) 
{ 
    
    for (int i = 0; i < arr_size; i++) 
        cout << arr[i] << " "; 
}


int main(){
    int arr[] = {0, 1, 2, 1, 0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    Sort012(arr,n);
    // cout<<"Smallest value of array ";
    // printArray(arr,n); 


    return 0;
}