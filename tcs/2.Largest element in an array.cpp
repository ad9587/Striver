// Find the Largest element in an array

// brute--
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int a;
    while (cin >> a)
    {
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    cout << v[v.size() - 1];
}

// ooptimal---
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m = -1;
    vector<int> v;
    int a;
    while (cin >> a)
    {
        v.push_back(a);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > m)
        {
            m = v[i];
        }
    }
    cout << m;
}