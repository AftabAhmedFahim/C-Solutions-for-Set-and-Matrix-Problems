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

    int isSubset = 1;
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            isSubset = 0;
            break;
        }
    }

    if (isSubset)
    {
        cout << "Set A is a subset of Set B.\n";
    }
    else
    {
        cout << "Set A is not a subset of Set B.\n";
    }

    return 0;
}

