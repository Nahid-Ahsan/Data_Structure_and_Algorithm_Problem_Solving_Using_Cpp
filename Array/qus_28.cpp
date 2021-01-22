#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool tripletSum(int arr[], int n, int s)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {

        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == s)
            {
                printf("1" );
                return true;
                
            }
            else if (arr[i] + arr[l] + arr[r] < s)
                l++;
            else
                r++;
        }
    }
    printf("0" );
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 13;

    tripletSum(arr, n, s);
    return 0;
}