#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using ull = unsigned long long int;
#define endl '\n'

#define mod 1000000007 //1e9+7
#define inf INT_MAX
#define infx LLONG_MAX // 1e18
#define pb push_back

const ll n = 10000000; // 10e7
bitset<10000005> b;  // to get in o(1)
vector<ll> primes; // collection of the prime numbers upto n

void sieve(){
  //set all bits
  b.set(); // 1,1,1,1,1....

  b[0] = b[1] = 0;

  for(ll i=2;i<=n;i++){
    if(b[i] == 1){
      primes.pb(i);
      for(ll j = i*i;j<=n;j+=i)
        b[j] = 0;
    }
  }
}

bool isPrime(ll num){
  if(num <=n)
    return b[num] == 1 ? true: false;

  for(ll i=0;primes[i]*(ll)primes[i] <=num;i++){
    if(num % primes[i] == 0) // if upto the square root of the large number if any prime divides it, it is not prime
      return false;
  }
  return true;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sieve();

  if(isPrime(2147483647)) // a ten digit prime
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;

  return 0;
}
