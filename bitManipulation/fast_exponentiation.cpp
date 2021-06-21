#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using ull = unsigned long long int;
#define endl '\n'

#define mod 1000000007 //1e9+7
#define inf INT_MAX
#define infx LLONG_MAX // 1e18

#define pb push_back
#define fi first
#define se second

ll power(ll a, ll b){
  ll ans = 1;

  while(b>0){
    if(b&1)
      ans *= a;

    b = b>>1;
    a*=a;
  }

  return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll a,b;
  cin>>a>>b;

  cout<<power(a,b)<<endl;

  return 0;
}
