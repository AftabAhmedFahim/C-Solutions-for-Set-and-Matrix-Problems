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
            if(i>j)
            {
                if(A[i][j]==0)
                {
                    found = 1;
                }
                else
                {
                    found =0;
                    cout << "Not an upper triangular matrix";
                    return 1;
                }
            }
        }
    }

    if(found == 1)
    {
        cout << "The given matrix is an upper triangular matrix";
    }

    return 0;
}
