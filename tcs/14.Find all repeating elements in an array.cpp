// Find all repeating elements in an array

// brute--
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a;
    vector<int>v;
    while(cin>>a){
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                cout<<v[i]<<" ";
            }
        }
    }
}

// optimal--
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    vector<int>v;
    while(cin>>a){
        v.push_back(a);
    }
    unordered_map<int,int>mp;
    for(auto i:v){
        mp[i]++;
    }
    for(auto i:mp){
        if(i.second>>1){
            cout<<i.first<<" ";
        }
    }
}




