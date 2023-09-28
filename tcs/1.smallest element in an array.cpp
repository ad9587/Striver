// Find the smallest element in an array
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
    cout << v[0];
}