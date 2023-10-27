// Prime Numbers in a given range


// brute--
#include <bits/stdc++.h>
using namespace std;

int main(){
    int min;
    int max;
    cin>>min>>max;
    
    for(int i=min;i<=max;i++){
        int c=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
            c++;
        }
        }
        if(c==0){
            cout<<i<<" , ";
        }
    }
}

// optimal--
#include <bits/stdc++.h>
using namespace std;
int main(){
    int min;
    int max;
    cin>>min>>max;
    
    for(int i=min;i<=max;i++){
        int c=0;
        for(int j=2;j<sqrt(i);j++){
            if(i%j==0){
            c++;
        }
        }
        if(c==0){
            cout<<i<<" , ";
        }
    }
}