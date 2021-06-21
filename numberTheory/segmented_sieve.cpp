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

const ll N = 100000; // 10e5
vector<ll> p(N); // main array to store primes
vector<ll> primes; // the main stored primes

void sieve(){ // the main prime sieve function
  for(ll i=2;i<=N;i++){
    if(p[i] == 0){
      //store in the primes vector
      primes.pb(i);
      // mark all the multiples of i as not prime
      for(ll j=i*i;j<=N;j+=i){
        p[j] = 1; // not prime, 1-> marker
      }
    }
    // special cases
  //  p[0] = p[1] = 1;
  }
}

int main(){ // spoj - PRIME1 - Prime Generator
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sieve(); // build this seive once for all

  int t;
  cin>>t;

  while(t--){
    ll m,n;
    cin>>m>>n;

    bool segment[n-m+1]; // for m to n elements
    memset(segment,true,sizeof(segment));

    for(auto x: primes){
      // stop the loop if remaining prime nos are not needed
      if(x*x > n)
        break;

      ll start = (m/x)*x;
      if(start < m)
        start+=x;

      //the prime number lies  in the segment sieve range
      if(x>=m && x<=n)
        start = x*2;

      //mark all multiples of x, in the range start to n as not prime
      for(ll i=start;i<=n;i+=x){
        segment[i-m] = false;
      }
    }
    // loop over range m...n and print the primes
    for(ll i=m;i<=n;i++){
       if(segment[i-m] && i!=1)
         cout<<i<<endl;
    }
    cout<<endl;
  }

  return 0;
}
