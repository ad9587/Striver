// Second Smallest and Second Largest Element in an array

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
    sort(v.begin(),v.end());
    cout<<"2nd small -> "<<v[1]<<endl;
    cout<<"2nd large -> "<<v[v.size()-2]<<endl;

    return 0;
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
    if(v.size()<3){
        return -1;
        
    }
    int small=INT_MAX;
    int ssmall=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(v[i]<small){
            ssmall=small;
            small=v[i];
            
        }else if(v[i]<ssmall && v[i]!=small){
            ssmall=v[i];
        }
    }
    
    int large=INT_MIN;
    int slarge=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>large){
            slarge=large;
            large=v[i];
            
        }else if(v[i]>slarge && v[i]!=large){
            slarge=v[i];
        }
    }
    cout<<"2nd small -> "<<ssmall<<endl;
    cout<<"2nd large -> "<<slarge<<endl;

    return 0;
}