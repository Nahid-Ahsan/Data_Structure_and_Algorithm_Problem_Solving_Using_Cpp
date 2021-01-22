#include<iostream>
#include<vector>
using namespace std;

void threePartition(vector<int>& arr,int a,int b)
{
    int l =0;
    int r = arr.size()-1;
    for(int i =0;i<=r;)
    {
        if(arr[i]<a)
        {
            swap(arr[i++],arr[l++]);
          
        }
        else if(arr[i]>b)
        {
            swap(arr[i],arr[r--]);
           
        }
        else
            i++;
    }

   for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    
    

}

int main(){
    vector<int> arr = {1, 14, 5, 20, 4, 2, 54, 20, 87, 
                98, 3, 1, 32}; 
    
    int a=10;
    int b = 20;
    threePartition(arr,a,b);
    
    
    return 0;
}