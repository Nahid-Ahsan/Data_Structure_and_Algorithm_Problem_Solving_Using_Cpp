#include <iostream>
using namespace std;

#define N 1000

int smallElement(int mat[N][N], int n, int k)
{

    if (n == 0)
        return 0;

    int start = mat[0][0];
    int end = mat[n - 1][n - 1];

    while (start < end)
    {
        int j = N - 1, cnt = 0;
        int mid = start + (end - start) / 2;

        for (int r = 0; r <= n; r++)
        {
            while (j >= 0 && mat[r][j] > mid)
                j--;

            cnt += (j + 1);
        }

        if (cnt < k)
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}

int main()
{

    int k = 3;
    int n = 4;
    int mat[N][N] = {{16, 28, 60, 64},
                     {22, 41, 63, 91},
                     {27, 50, 87, 93},
                     {36, 78, 87, 94}};

    
    cout<< smallElement(mat,n, k);
    return 0;
}