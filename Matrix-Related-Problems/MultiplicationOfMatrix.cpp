#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m1,n1,m2,n2;
    cout << "Enter number of rows of Matrix A:";
    cin >> m1;
    cout << "Enter number of coloumns of Matrix A:";
    cin >> n1;
    cout << "Enter number of rows of Matrix B:";
    cin >> m2;
    cout << "Enter number of coloumns of Matrix B:";
    cin >> n2;

    if(n1!=m2)
    {
        cout << "Multiplication not possible";
        return -1;
    }

    int A[m1][n1],B[m2][n2];

    cout << "Enter the elements of Matrix A:";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of Matrix B:";
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin >> B[i][j];
        }
    }

    int mult[m1][n2];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            mult[i][j] = 0;
            for(int k=0;k<n1;k++)
            {
                mult[i][j] += (A[i][k] * B[k][j]);
            }
        }
    }

    cout << "Result of multiplication:\n";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout << mult[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
