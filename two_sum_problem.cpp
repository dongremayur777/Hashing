#include<bits/stdc++.h>
using namespace std;
void printpairs(int a[],int n,int sum)
{
unordered_set<int>s;
for(int i=0;i<n;i++)
{
int temp=sum-a[i];
if(s.find(temp)!=s.end())
cout<<"Pair with given sum "<<sum<<"is"<<"("<<a[i]<<","<<temp<<")"<<endl;
s.insert(a[i]);
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
printpairs(a,n,sum);
return 0;
}
