// Find Median of the given Array

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    
    int n=v.size();
    sort(v.begin(),v.end());
    if(n%2==0){
        int b=(n/2)-1;
        int c=(n/2);
        cout<<(double)(v[b]+v[c])/2;
    }else{
        cout<<v[n/2];
    }
}