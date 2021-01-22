


#include<bits/stdc++.h>

using namespace std;

const int Max = 100;
int binaryMedian(int mat[][Max],int r, int c)
{
    int min = INT_MAX, max = INT_MIN;
    for(int i =0;i<r;i++)
    {
        if(mat[i][0]<min)
            min = mat[i][0];
        if(mat[i][c-1]>max)
            max = mat[i][c-1];
    }


    int target = (r*c+1)/2;
    while(min<max)
    {
        int mid = min+(max-min)/2;
        int place =0;

        for(int i =0;i<r;++i)
            place += upper_bound(mat[i], mat[i]+c,mid) - mat[i];

        if(place<target)
            min = mid+1;
        else
            max = mid;
    }
    return min;


}

int main(){
    int r = 3, c = 3;
	int m[][Max]= { {1,3,5}, {2,6,9}, {3,6,9} };
	cout << "Median is " << binaryMedian(m, r, c) << endl;
    return 0;
}
