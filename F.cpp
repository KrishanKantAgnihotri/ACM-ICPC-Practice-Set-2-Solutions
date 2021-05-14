//simple explanation: Find the frequency of minimum element in the array and print output based on the condition mention in the problem.
#include<bits/stdc++.h>
#define vi vector<int>
#define all(a) a.begin(),a.end()
#define ll long long int
using namespace std;

int main()
{
   ll n,k;
   cin>>n;
   vi v(n);
   for(int i = 0 ;i<n ;i++)
   cin>>v[i];
  auto mn =min_element(all(v));
  int cnt = 0 ;
  for(int i  = 0 ;i<n; i++)
  {
      if(v[i]==*mn)
      cnt++;
  }
  if(cnt>1)
  cout<<"Still Rozdil"<<endl;
  else
  cout<<mn-v.begin()+1<<endl;
}

 
