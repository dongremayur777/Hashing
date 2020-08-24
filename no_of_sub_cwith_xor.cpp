#include<bits/stdc++.h>
using namespace std;
int longzero(int a[],int n,int xo)
{
long long ans=0;
int* XOR=new int[n];
unordered_map<int,int>mp;
XOR[0]=a[0];
for(int i=0;i<n;i++)
XOR[i]=XOR[i-1] ^ a[i];
for(int i=0;i<n;i++){
int tmp=xo ^ XOR[i];
ans=ans+((long long)mp[tmp]);
if(XOR[i]==xo)
ans++;
mp[XOR[i]]++;
}
return ans;
}
int  main()
{
int n;
cin>>n;
int xo;
cin>>xo;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<longzero(a,n,xo);
return 0;
}
