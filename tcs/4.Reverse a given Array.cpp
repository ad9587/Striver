// Reverse a given Array

// brute--

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int c=0;
        cin>>c;
        v.push_back(c);
    }
    for(int i=n-1;i>=0;i--){
        cout<<v[i];
    }
}



// jadoo--

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int c=0;
        cin>>c;
        v.push_back(c);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}



// optimal--

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int c=0;
        cin>>c;
        v.push_back(c);
    }
    int p1=0,p2=n-1;
    while(p1<p2){
        swap(v[p1],v[p2]);
        p1++;
        p2--;
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}

