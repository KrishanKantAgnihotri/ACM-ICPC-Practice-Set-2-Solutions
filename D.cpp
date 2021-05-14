 //Simple Explanation: Iterate over all the elements of matrix and check for condition mentioned in question.
   
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n;
   cin>>n;
   ll arr[n][n];
   for(int i = 0 ;i<n ;i++){
    for(int j = 0 ;j<n ;j++)
        cin>>arr[i][j];
   }
   ll cnt = 0 ; 
   for(int i = 0 ;i<n ;i++){
    for(int j = 0 ;j<n ;j++){
        ll row  = 0 ; 
        for(int i = 0; i<n; i++)
            row+=arr[i][j];
        ll col = 0 ; 
        for(int j = 0 ;j<n ;j++){
            col+=arr[i][j]; 
        }
        swap(col,row);
        if(col>row){
            cnt++;
        }
    }
   }
   cout<<cnt<<endl;
}
