// Find Sum of AP Series


// brute--
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n,a,d;
    cin>>n>>a>>d;
    float sum=0;
    for(int i=1;i<=n;i++){
        sum+=a;
        a+=d;
    }
    cout<<sum;
    
}

// optimal--
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n,a,d;
    cin>>n>>a>>d;
    float sum=0;
    sum=(n/2)*((2*a)+(n-1)*d);
    cout<<sum;
    
}