// Remove Duplicates in-place from Sorted Array

// brute--
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    set<int>set;
    for(int i=0;i<v.size();i++){
        set.insert(v[i]);
    }
    int k=set.size();
    int j=0;
    for(int x:set){
        v[j++]=x;
    }
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
}


// optimal--
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    int c=0;
    for(int i=0;i<v.size();i++){
        if(v[c]!=v[i]){
            c++;
            v[c]=v[i];
        }
    }
    for(int i=0;i<=c;i++){
        cout<<v[i]<<" ";
    }
    
}