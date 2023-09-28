// Calculate Sum of the Elements of the Array

// brute--

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a;
        c+=a;
    }
    cout<<c;
}

//optimal--

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int a;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cout<<accumulate(v.begin(),v.end(),c);
}
