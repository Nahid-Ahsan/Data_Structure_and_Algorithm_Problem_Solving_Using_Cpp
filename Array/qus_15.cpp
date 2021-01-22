#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void nextPer(vector<int> &arr)
{
    bool flag = false;
    int i;
    for(i=arr.size()-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            flag = true;
            break;
        }

    }
    if(flag == true)
    {
        for(int j =arr.size()-1;j>0;j--)
        {
            if(arr[j]>arr[i-1])
            {
                swap(arr[i-1],arr[j]);
                break;
            }
        }
    }
    else
        i =0;

    sort(arr.begin()+i,arr.end())   ;

    

}

int main(){
    vector<int> arr = {1,2,3};
    
    nextPer(arr);

    for(int i =0; i<arr.size();i++)
    {
        cout<<arr.at(i)<<" ";
    }

    return 0;
}