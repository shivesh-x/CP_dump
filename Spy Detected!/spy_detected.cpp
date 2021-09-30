#include <iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<math.h>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<utility>
#include<deque>
#define ll long long
#define sz(x) ((int)x.size())
#define mod 1'000'000'007
using namespace std;

int main()
{

  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t;            cin >> t;

  while(t--){

  int n;             cin >> n;

  vector < int > v(n);

 map < int , int > freq;

  for(int i = 0  ; i < n ; i++){
    cin >> v[i];
    freq[v[i]]++;

  }

  for(int i = 0 ; i < n ; i++){
    if(freq[v[i]] == 1){
        cout << i + 1;
        break;
    }
  }
   cout << '\n';
  }

    return 0;
}
