//Simple Explanation: Simulate what mention in the question using modular operation.         
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n;
 cin>>n;
 ll num =n;
 n--;
 ll cur = 2 ;
 ll cnt = 1 ; 
 while(n--){
   if(cur == 0)
    cout<<num<<" ";
else
    cout<<cur<<' ';
    cnt++;
    cur+=cnt;
    
    cnt%=num;
    cur%=num;
 }
}
