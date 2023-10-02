// Rotate array by K elements

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int k;
    cin>>k;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k+1)%n]=v[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}