// Find all the non-repeating elements in an array

// brute--
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a;
    vector<int>v;
    while(cin>>a){
        v.push_back(a);
    }
    bool c;
    
    for(int i=0;i<v.size();i++){
        c=false;
        for(int j=0;j<v.size();j++){
            if(i!=j && v[i]==v[j]){
                c= true;
                break;
            }
        }
        if(c==false){
            cout<<v[i]<<" ";
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
        if(i.second==1){
            cout<<i.first<<" ";
        }
    }
}




