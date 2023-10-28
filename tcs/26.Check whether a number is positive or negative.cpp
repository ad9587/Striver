// Check whether a number is positive or negative


// brute--
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0){
        cout<<"Positive";
    }else if(n==0){
        cout<<"e to jirooo hai";
    }else{
        cout<<"Negative";
    }
}

// optimal--
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>>31==0){
        cout<<"Positive";
    }else{
        cout<<"Negative";
    }
}