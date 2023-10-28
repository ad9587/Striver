// Check whether a number is Perfect Number or not


// brute--
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"Perfect";
    }else{
        cout<<"Not Perfect";
    }
}

// optimal--
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int og=n;
    int sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n || i==1){
                sum+=i;
            }else{
                sum+=i+n/i;
            }
        }
    }
    if(sum==og){
        cout<<"Perfect";
    }else{
        cout<<"Not Perfect";
    }
}