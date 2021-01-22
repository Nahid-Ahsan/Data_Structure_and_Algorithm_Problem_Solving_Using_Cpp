#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

 void unionArr(int arr1[],int n, int arr2[],int m)
 {
     vector<int> unionVect;
     for(int i =0;i<n;i++)
     {
         unionVect.push_back(arr1[i]);
     }
     for(int i =0;i<m;i++)
     {
         bool duplicate = false;
         for(int j =0;j<unionVect.size();j++)
         {
             if(arr2[i]==unionVect.at(j)) 
             {
                 duplicate = true;  
             }
         }
         if(!duplicate)
         {
             unionVect.push_back(arr2[i]);
         }
     }

     for(int i =0;i<unionVect.size();i++)
     {
         cout<<unionVect.at(i)<<" ";
     }
 }
    
int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {1,2,3,4,5,5,6,7,8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    unionArr(arr1,n,arr2,m);
    
   
    
    
    return 0;
}