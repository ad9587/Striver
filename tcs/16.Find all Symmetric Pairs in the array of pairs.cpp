// Find all Symmetric Pairs in the array of pairs


// brute--
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int>>v;
    int a,b;
    while(cin>>a>>b){
        v.push_back({a,b});
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if((v[i].first==v[j].second)&&(v[i].second==v[j].first)){
                cout<<"("<<v[i].first<<","<<v[i].second<<")"<<endl;
            }
        }
    }

    return 0;
}

// optimal--
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int>>v;
    int a,b;
    while(cin>>a>>b){
        v.push_back({a,b});
    }
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        int first=v[i].first;
        int second=v[i].second;
        if(mp.find(second)!=mp.end() && mp[second]==first){
            cout<<"("<<first<<","<<second<<")"<<endl;
        }else{
            mp[first]=second;
        }
    }

    return 0;
}