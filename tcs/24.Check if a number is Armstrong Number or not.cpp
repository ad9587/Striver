// Check if a number is Armstrong Number or not


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   
    cin>>n;
     int og=n;
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=pow(d,3);
        n/=10;
    }
    if(og==sum){
        cout<<"Armstrong Number";
    }else{
        cout<<"Not Armstrong";
    }
    return 0;
}