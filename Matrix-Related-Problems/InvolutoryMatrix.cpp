#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int A[n][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int is_invo = 1;
    int temp[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                temp[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j && temp[i][j] != 1) || (i != j && temp[i][j] != 0))
            {
                is_invo= 0;
                break;
            }
        }
        if (!is_invo)
        {
            break;
        }
    }

    if (is_invo)
    {
        cout << "The given matrix is an involutory matrix\n";
    }
    else
    {
        cout << "The given matrix is not an involutory matrix\n";
    }

    return 0;
}

