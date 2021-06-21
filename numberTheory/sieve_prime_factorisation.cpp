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

const ll N = 100005;
vector<ll> p(N);

vector<ll> primeSieve(){
  p[0] = p[1] = 0; // 0 means not prime
  p[2] = 1;

  //Lets mark all odd numbers as Prime(Initializations)
  for(ll i=3;i<=N;i+=2)
    p[i] = 1; // 1 means prime

  //Seive login to mark non prime numbers as 0
  //1.Optimisation: Iterate only over odd numbers
  for(ll i=3;i<=N;i+=2){
    if(p[i] == 1){
      //Mark all the multiples of that number as not prime.
      //2. Optimisation : Take a jump of 2i starting from i*i
      for(ll j=i*i;j<=N;j+=2*i)
        p[j] = 0;
    }
  }

  vector<ll> primes;
  primes.pb(2);

  for(ll i=3;i<=N;i+=2){
    if(p[i] == 1)
      primes.pb(i);
  }

  return primes;
}

//This returns a vector of prime factors
vector<ll> factorize(ll m, vector<ll> &primes){
  vector<ll> factors;

  ll i=0;
  ll j = primes[i];

  while(j*j<=m){
    if(m%j == 0){ // if the prime divides the number
      factors.pb(j);
      while(m%j == 0) // reduce untill it no longer divides
        m/=j;
    }
    j = primes[++i]; // move to the next prime
  }

  if(m!=1)
    factors.pb(m);

  return factors;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<ll> primes = primeSieve();

  int t;
  cin>>t;

  while(t--){
    ll n;
    cin>>n;

    vector<ll> factors = factorize(n,primes);

    for(auto f: factors)
      cout<<f<<" ";
    cout<<endl;
  }

  return 0;
}
