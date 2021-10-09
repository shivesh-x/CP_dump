#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int>& x,int c,int maxm){
	int n=x.size();
	long long sum=0;
	for(int i=0;i<n;i++){
		if(x[i]>maxm){
			sum+=(x[i]-maxm);
		}
	}
	if(sum>=c)
		  return true;
	return false;
}
int main() {
		int n,c;
		cin>>n>>c;
		vector<int> x(n);
		for(int i=0;i<n;i++)
		   cin>>x[i];
		sort(x.begin(),x.end());
    	int l=0,h=x[n-1],ans=0;
    	while(l<=h){
		int mid=(l+h)/2;
		if(isValid(x,c,mid))
		   {
		   	ans=mid;
		   	l=mid+1;
		   }
		 else
		    h=mid-1;
	    }
	    cout<<ans;
	return 0;
} 
