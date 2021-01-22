#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void transection(vector<int> arr)
{
    
    int i, max_ele = INT_MAX;
    int profit = 0;
    for(int i = 0;i<arr.size();++i)
    {
        max_ele = min(max_ele,arr[i]);
        profit = max(arr[i]-max_ele,profit);


    }
    cout<<profit;
}


int main(){
    
    vector<int> arr = {7,1,5,3,6,4};
    transection(arr);
    return 0;
}