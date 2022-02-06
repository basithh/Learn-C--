#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subques(int arr[], int n, vector<int> &a2, int ind, int s, int sum)
{
    if (ind == n)
    {
        if (sum == s)
        {
            for (auto ai : a2)
            {
                cout << ai << "  ";
            }
        }

        cout << endl;
        return 0;
    }
    a2.push_back(arr[ind]);
    sum += arr[ind];
    subques(arr, n, a2, ind + 1,s,sum);
    a2.pop_back();
    sum -= arr[ind];
    subques(arr, n, a2, ind + 1,s,sum);
    return 0;
}

int main()
{
    int a[] = {1, 2, 1};
    int n = 3;
    vector<int> a2;
    subques(a, n, a2, 0, 2, 0);

    return 0;
}