// Maximum Product Subarray in an Array


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
    int maxi=INT_MIN;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            int prod=1;
            for(int k=i;k<=j;k++){
                prod*=v[k];
            }
            maxi=max(maxi,prod);
        }
    }
    cout<<maxi;
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
    int prod1=v[0],prod2=v[0],maxi=v[0];
    for(int i=0;i<v.size();i++){
        int temp=max({v[i],prod1*v[i],prod2*v[i]});
        prod2=min({v[i],prod1*v[i],prod2*v[i]});
        prod1=temp;
        maxi=max(maxi,prod1);
    }
    cout<<maxi;
}
