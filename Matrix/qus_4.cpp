#include <iostream>
using namespace std;

#define R 4
#define C 4

int first(bool arr[], int left, int right)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if ((mid == 0 || arr[mid - 1] == 0) && arr[mid] == 1)
        {
            return mid;
        }
        else if (arr[mid] == 0)
        {
            return first(arr, (mid + 1), right);
        }
        else
        {
            return first(arr, left, (mid - 1));
        }
    }
    return -1;
}

int Max1s(bool mat[R][C])
{
    int max_row_index = 0;
    int max = -1;

    int i, index;
    for (i = 0; i < R; i++)
    {
        index = first(mat[i], 0, C - 1);
        if (index != -1 && C - index > max)
        {
            max = C - index;
            max_row_index = i;
        }
    }
    return max_row_index;
}

int main()
{

    bool mat[R][C] = {{0, 0, 0, 1},
                      {0, 1, 1, 1},
                      {1, 1, 1, 1},
                      {0, 0, 0, 0}};

    cout << "Index of row with maximum 1s is " << Max1s(mat);
    return 0;
}