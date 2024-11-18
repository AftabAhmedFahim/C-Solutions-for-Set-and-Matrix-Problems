#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter the size of the square matrix:\n";
    cin >> m;
    int A[m][m];

    cout << "Enter elements of the matrix:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> A[i][j];
        }
    }

    int found=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j && A[i][j]!=1)
            {
                found=0;
                break;
            }
            else if(i!=j && A[i][j]!=0)
            {
                found=0;
                break;
            }
        }
        if(found==0)
        {
            break;
        }
    }
    if(found==1)
    {
        cout << "Given matrix is an Identity matrix";
    }
    else
    {
        cout << "Given matrix is not an Identity matrix";
    }
    return 0;
}
