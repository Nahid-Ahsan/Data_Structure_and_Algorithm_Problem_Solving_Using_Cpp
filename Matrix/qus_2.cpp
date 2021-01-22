#include<iostream>
#include<vector>
using namespace std;

bool searchMat(vector<vector<int>>& matrix, int target)
{      
    if(matrix.size() == 0)
        return false;

    int rows = matrix.size();
    int columms = matrix[0].size();
    
    int left =0;
    int right = rows*columms-1;
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        int mid_ele = matrix[mid/columms][mid%columms];
        if(mid_ele==target)
        {
            return true;
        }
        else if(target<mid_ele)
            {
                right = mid -1;
            }
        else if(target> mid_ele)
            {
                left = mid+1;
            }

        
    }
    return false;
    
}

int main(){
    vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    cout <<searchMat(v, 1);
    return 0;
}