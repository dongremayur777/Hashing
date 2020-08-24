#include<bits/stdc++.h>
using namespace std;
int longzero(int a[],int n)
{
unordered_map<int,int>mp;
int sum=0;
int max_len=0;
for(int i=0;i<n;i++)
{
sum+=a[i];
if(a[i]==0 && max_len==0)
max_len=1;
if(sum==0)
max_len=i+1;
if(mp.find(sum)!=mp.end()){
max_len=max(max_len,i-mp[sum]);
}
else{
mp[sum]=i;
}
}return max_len;
}
int  main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<longzero(a,n);
return 0;
}
