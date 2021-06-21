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

void primeFacors(ll n){

  vector<pair<ll,ll>> factors;
  ll cnt = 0;

  for(ll i=2;i*i<=n;i++){
    if(n%i == 0){
      cnt = 0;
      //keep on dividing it by i till it is divisible
      while(n%i == 0){
        cnt++;
        n/=i;
      }
      factors.pb({i,cnt});
    }
  }
  if(n!=1) // whatever is left is a prime number in itself
    factors.pb({n,1});

  for(auto p: factors)
    cout<<p.fi<<"^"<<p.se<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin>>n;

  primeFacors(n);


  return 0;
}
