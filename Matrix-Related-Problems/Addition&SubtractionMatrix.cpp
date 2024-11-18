#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter number of rows:";
    cin >> m;
    cout << "Enter number of coloumns:";
    cin >> n;

    int A[m][n],B[m][n];

    cout << "Enter the elements of Matrix A:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           	cin >> A[i][j];
        }
    }

    cout << "Enter the elements of Matrix B:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> B[i][j];
        }
    }

    int Add[m][n],Sub[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            Add[i][j] = A[i][j]+B[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            Sub[i][j] = A[i][j]-B[i][j];
        }
    }

    cout << "Addition of the matrix:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << Add[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nSubtraction of the matrix:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << Sub[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
