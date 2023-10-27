// Check whether a given number is even or odd


// brute--
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
}

// other brute--
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n&1)==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
}