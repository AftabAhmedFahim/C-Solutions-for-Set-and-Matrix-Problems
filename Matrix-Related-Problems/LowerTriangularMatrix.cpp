#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout << "Enter number of rows:";
    cin >> m;
    cout << "Enter number of coloumns:";
    cin >> n;

    int A[m][n];

    cout << "Enter elements of the matrix:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> A[i][j];
        }
    }
    int found=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                if(A[i][j]==0)
                {
                    found = 1;
                }
                else
                {
                    found =0;
                    cout << "Not an lower triangular matrix";
                    return 1;
                }
            }
        }
    }

    if(found == 1)
    {
        cout << "The given matrix is an lower triangular matrix";
    }

    return 0;
}

