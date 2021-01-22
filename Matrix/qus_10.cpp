#include<iostream>
#include<map>
using namespace std;

#define N 4

void ComElement(int mat[N][N])
{
    map<int,int> m;
for(int i =0;i<N;i++)
{
    m[mat[0][i]] =1;

}

for(int i=1;i<N;i++)
{
    for(int j=0;j<N;j++)
    {
        if(m[mat[i][j]]==i)
        {
            m[mat[i][j]] = i+1;

            if(i==N-1)
                cout<<mat[i][j]<<" ";
        }
    }
}


}


int main(){
    int mat[N][N] = { {1, 2, 1, 8}, 
                      {3, 7, 8, 1}, 
                      {8, 7, 3, 1}, 
                      {8, 1, 2, 7}, 
                    };

    ComElement(mat);
  
    return 0;
}