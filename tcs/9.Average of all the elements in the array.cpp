// Average of all the elements in the array

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
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        
    }
    
    cout<<sum/n;
    return 0;
}