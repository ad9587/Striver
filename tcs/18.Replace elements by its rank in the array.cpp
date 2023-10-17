// Replace elements by its rank in the array


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
    vector<int>g;
    g=v;
    sort(g.begin(),g.end());
    
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[i]==g[j]){
            cout<<j+1<<" ";
        }
        }
        
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
    vector<int>g;
    g=v;
    int temp=1;
    sort(g.begin(),g.end());
    map<int,int>mp;
    for(int i=0;i<v.size();i++){
        if(mp[g[i]]==0){
            mp[g[i]]=temp;
            temp++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<mp[v[i]]<<" ";
    }
}