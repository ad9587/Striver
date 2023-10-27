// Find all Palindrome Numbers in a given range

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while(temp>0) {
        reverse = reverse*10 + temp%10;
        temp = temp/10;
    }
    if(n==reverse)return true;
    return false;
}
 
int main()
{
    int min ;
    int max ;
    cin>>min>>max;
    for(int i=min; i<=max; i++) {
        if(isPalindrome(i)) {
            cout<<i <<" ";
        }
    }    
    return 0;
}