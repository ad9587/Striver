// Check if a number is prime or not


// brute--
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c>0){
        cout<<"Not Prime";
    }else{
        cout<<"Prime";
    }
}

// optimal--
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            c++;
        }
    }
    if(c>0){
        cout<<"Not Prime";
    }else{
        cout<<"Prime";
    }
}