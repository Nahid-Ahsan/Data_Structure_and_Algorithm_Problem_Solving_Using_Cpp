#include <iostream>
using namespace std;

int alterArray(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] < 0 && arr[j] > 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        else if (arr[i] < 0 && arr[j] > 0)
        {
            i++;
            j--;
        }
        else if (arr[i] > 0)
            i++;

        else if (arr[j] < 0)
        {
            j--;
        }
    }

    if (i = 0 or i == n)
    {
        for (int a = 0; a < n; a++)
            cout << arr[a] << " ";
    }
    else
    {
        int k = 0;
        while (k < n && i < n)
        {
            swap(arr[k], arr[i]);
            k = k + 2;
            i++;
        }
        for (int a = 0; a < n; a++)
            cout << arr[a] << " ";
    }
}


int main()
{
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    alterArray(arr, n);
    return 0;
}