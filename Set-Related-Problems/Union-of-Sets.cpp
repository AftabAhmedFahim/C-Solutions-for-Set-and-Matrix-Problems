#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter the size of set A: ";
    cin >> n;
    cout << "Enter the size of set B: ";
    cin >> m;

    int A[n], B[m];

    cout << "Enter elements for set A:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter elements for set B:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int uni[n + m];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        uni[k++] = A[i];
    }

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
            uni[k++] = B[i];
        }
    }

    if (k == 0)
    {
        printf("-1\n");
    }
    else
    {
        cout << "Union Set: ";
        for (int i = 0; i < k; i++)
        {
            cout << uni[i] << " ";
        }
    }

    return 0;
}
