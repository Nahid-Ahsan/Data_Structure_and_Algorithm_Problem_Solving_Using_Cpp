#include <iostream>
#include <vector>
using namespace std;

void mejorityNum(vector<int> nums, int k)
{
    int size = nums.size();
    int num1 = 0, num2 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] == num1)
            cnt1++;

        else if (nums[i] == num2)
            cnt2++;

        else if (cnt1 == 0)
        {
            num1 = nums[i];
            cnt1 = 1;
        }
        else if (cnt2 == 0)
        {
            num2 == nums[i];
            cnt2 = 1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    vector<int> ans;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] == num1)
            count1++;

        else if (nums[i] == num2)
            count2++;
    }

    if (count1 >= size / k)
        {
            ans.push_back(num1);
        }

    if (count2 >= size / k)
        {
            ans.push_back(num2);
        }

    for(int n:ans)
    {
        cout<<n<<" "<<endl;
    }
}

int main()
{
    vector<int> arr = {2, 3, 3, 2};
    int k = 3;
    mejorityNum(arr, k);
    return 0;
}