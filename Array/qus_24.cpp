#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void largeSequence(int arr[], int n)
{
    int cnt = 0;
    int ans = 0;
    sort(arr, arr + n);

    vector<int> v;

    v.push_back(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i - 1] + 1)
            cnt++;

        else
            cnt = 1;

        ans = max(ans, cnt);
    }

    cout<<ans;
}

int main()
{

    int arr[] = {2, 6, 1, 9, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    largeSequence(arr, n);
    return 0;
}
