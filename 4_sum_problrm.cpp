#include<bits/stdc++.h>
using namespace std;
void printfourelements(int a[],int n,int sum)
{
unordered_map<int,pair<int,int>>mp;
for(int i=0;i<n-1;i++)
for(int j=i+1;j<n;j++)
mp[a[i]+a[j]]={i,j};
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
int rada=a[i]+a[j];
if(mp.find(sum-rada)!=mp.end()){
pair<int,int>p=mp[sum-rada];
if(p.first!=i && p.first!=j && p.second!=i && p.second!=j)
{
cout<<a[i]<<","<<a[j]<<","<<a[p.first]<<","<<a[p.second];
return;
}
}
}
}
}
int  main()
{
int n;
cin>>n;
int sum;
cin>>sum;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
printfourelements(a,n,sum);
return 0;
}
