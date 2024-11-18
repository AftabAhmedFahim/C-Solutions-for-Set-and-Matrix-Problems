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

    int intersec[n < m ? n : m];
    int Size = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                intersec[Size++] = A[i];
                break;
            }
        }
    }

    if (Size == 0)
    {
        cout << "No intersection found.\n";
    }
    else
    {
        cout << "Intersection of set A and set B:";
        for (int i = 0; i < Size; i++)
        {
            cout << intersec[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

