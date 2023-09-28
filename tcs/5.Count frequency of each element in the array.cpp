// Count frequency of each element in the array

// brute--

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    int n=v.size();
    vector<bool>visited(n,false);
    for(int i=0;i<v.size();i++){
        if(visited[i]==true){
            continue;
        }
        int c=1;
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                visited[j]=true;
                c++;
            }
        }
        cout<<v[i]<<" "<<c<<endl;
    }
}



// // optimal--

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    while(cin>>a){
    v.push_back(a);
    }
    unordered_map<int,int>map;
    for(int i=0;i<v.size();i++){
        map[v[i]]++;
    }
    for(auto x: map){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

