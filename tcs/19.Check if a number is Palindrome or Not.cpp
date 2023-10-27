#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int og=n;
    int x=0;
    while(n>0){
        int d=n%10;
        x=x*10+d;
        n=n/10;
    }
    if(og==x){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    return 0;
}