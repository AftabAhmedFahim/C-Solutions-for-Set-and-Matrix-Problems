#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the size of set A: ";
    cin >> n;
    cout << "Enter the size of set B: ";
    cin >> m;

    int A[n], B[m];

    cout << "Enter elements of set A:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter elements of set B:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int complement[m];
    int Size = 0;

    for (int i = 0; i < m; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (B[i] == A[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            complement[Size++] = B[i];
        }
    }

    if (Size == 0)
    {
        cout << "Complement of set A with respect to set B is empty.\n";
    }
    else
    {
        cout << "Complement of set A with respect to set B: { ";
        for (int i = 0; i < Size; i++)
        {
            cout << complement[i] << " ";
        }
        cout << "}\n";
    }

    return 0;
}

