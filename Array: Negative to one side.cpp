#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[] = {1,2,-4,-5,9,-3};
	int n = 6;
	int lo=0,hi = n-1;
	while(lo<hi)
	{
	  if(a[lo]<0)
	        {
	            lo++;
	        }
	  else
	        {
	            swap(a[lo],a[hi]);
	            hi--;
	        }
	for(int i : a)
	{
	    cout<<i<<" ";
	}cout<<endl;
	    
	}
	
	
	return 0;
}
