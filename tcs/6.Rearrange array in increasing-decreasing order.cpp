// Rearrange array in increasing-decreasing order


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    int n=v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<n/2;i++){
        cout<<v[i]<<" ";
    }
    for(int i=n-1;i>=n/2;i--){
        cout<<v[i]<<" ";
    }
}


