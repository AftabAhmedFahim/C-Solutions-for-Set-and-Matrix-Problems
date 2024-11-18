#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter number of rows:";
    cin >> m;
    cout << "Enter number of coloumns:";
    cin >> n;

    int A[m][n],T[n][m];

    cout << "Enter elements of the matrix:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            T[i][j] = A[j][i];
        }
    }

    cout << "Transposed Matrix:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << T[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
