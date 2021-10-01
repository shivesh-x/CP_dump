#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int k=1, j=0;
        int arr[1000];
        while(j<1000){
            int p=k%10;
            if(k%3!=0&&p!=3){
                 arr[j]=k;
                 j++;
            }
            k++;
        }
        cout<<arr[n-1]<<endl;
    }
    return 0;
}
