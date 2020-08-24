#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256 
int tillrepeat(string a)
{
int n=a.size();
int res=0;
    vector<int> lastIndex(NO_OF_CHARS, -1); 
  
    // Initialize start of current window 
    int i = 0; 
  
    // Move end of current window 
    for (int j = 0; j < n; j++) { 
  
        // Find the last index of str[j] 
        // Update i (starting index of current window) 
        // as maximum of current value of i and last 
        // index plus 1 
        i = max(i, lastIndex[a[j]] + 1); 
  
        // Update result if we get a larger window 
        res = max(res, j - i + 1); 
  
        // Update last index of j. 
        lastIndex[a[j]] = j; 
    } 
    return res; 
}
int  main()
{
int n;
string a;
cin>>a;
cout<<tillrepeat(a);
return 0;
}
