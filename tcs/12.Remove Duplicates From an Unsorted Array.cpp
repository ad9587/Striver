// Remove Duplicates From an Unsorted Array

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    map<int,int>mp;
    for(int i=0;i<v.size();i++){
        if(mp.find(v[i])==mp.end()){
            cout<<v[i]<<" ";
            mp[v[i]]++;
        }
    }
    
}