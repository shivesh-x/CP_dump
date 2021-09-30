#include <iostream>
using namespace std;

int main() {
	int o;
	cin>>o;
	while(o--)
	{
	    int x,y,x1,y1,d;
	    cin>>x>>y>>x1>>y1>>d;
	    x=x/x1;
	    y=y/y1;
	    if(min(x,y)>=d)
	    {
	        cout<<"yes\n";
	        
	    }
	    else{
	        cout<<"no\n";
	    }
	    
	}
	return 0;
}
