#include<iostream>
using namespace std;

#define N 4

void rotateMat(int mat[N][N])
{
    for (int j = 0; j < N; j++) 
    {
        for (int i = N - 1; i >= 0; i--)
            cout << mat[i][j] << " ";
        cout << '\n';
    }
}

int main(){
    int mat[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };

    rotateMat(mat);
    return 0;
}