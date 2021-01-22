#include<iostream>
#include<vector>
using namespace std;

long long int ans; 


void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1 = l;
    int n2 = m;

    long long int L[n1],R[n2];

    for(i=0;i<n1;++i)
    {
        L[i] = arr[i+l];
    }

    for(i =0;i<n2;++i)
    {
        R[i]=arr[i+m+1];
    }

    i = 0;
    j = 0;
    k = l;

    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
            {
                arr[k++] = L[i++];
            }

        else
            {
                
                arr[k++] = R[j++];
                ans = ans + (n1+i);
            }

    }
    while(i<n1)
    {
        arr[k++] = L[i++];
    }
    while(j<n2)
    {
         arr[k++] = R[j++];
    }
    
}

void mergeSort(int arr[],int l,int r)
{
        
    	if(l<r)
        {
            
            int m = l+(r-l)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }

        
}

int main(){
    // int arr[] = {2,4,1,3,5};
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    cout<<ans<<endl;
    return 0;
}