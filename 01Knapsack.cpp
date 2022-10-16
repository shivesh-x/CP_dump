// Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
// In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively.
// Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[]
// such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item,
// either pick the complete item or don’t pick it (0-1 property).

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
