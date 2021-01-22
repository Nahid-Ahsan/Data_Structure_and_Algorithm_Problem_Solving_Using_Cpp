#include<iostream>
#include<map>

using namespace std;

void countpairs(int arr[],int n, int k)
{
    map<int, int> m;


    int cnt=0;
    int i;
    

    for(i=0;i<n;++i)
    {
        m[arr[i]]++;
    }

    for(i=0;i<n;++i)
    {
        cnt+=m[k-arr[i]];

        if(k-arr[i]==arr[i])
            {
                cnt--;
            }
    }
    cout<<cnt/2;

    
   
}




int main(){
    int arr[] = {1, 5, 7, 1};
    int k = 6;
    int n =4;
    countpairs(arr,n,k);
    return 0;
}