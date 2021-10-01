#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int fun(int w[],int v[],int weight,int i,int n,int ans)
{
    if(i==n)
    {
        return ans;
    }
    if(weight<0)
    return 0;
    int a=0,b=0;
    if(weight>=w[i])
    a = fun(w,v,weight-w[i],i+1,n,ans+v[i]);
    b = fun(w,v,weight,i+1,n,ans);
    return max(a,b);
}

int main()
{
    int w[] = {10,20,30};
    int v[] = {100,150,200};
    int weight = 45;
    // int w[] ={2,7,3,4};
    // int v[] = {5,20,20,10};
    // int weight=11;
    // int w[] = {7,4,4};
    // int v[] = {15,8,8};
    // int weight = 10;
    vector<vector<ll>> arr();
    cout<<fun(w,v,weight,0,3,0);
}
