#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using ull = unsigned long long int;
//#define endl '\n'

#define mod 1000000007 //1e9+7
#define inf INT_MAX
#define infx LLONG_MAX // 1e18
#define pb push_back

ll primes[1000005];

// Sieve Approch - Generate an array containing prime numbers
void prime_sieve(){

  //first mark all odd prime numbers
  for(ll i=3;i<=1000000;i+=2)
    primes[i] = 1; // 1 represents prime

  //Sieve
  for(ll i=3;i<=1000000;i+=2){
    // if current number is 1 then it is prime
    if(primes[i] == 1){
      // make all multiples of i as not prime (0)
      for(ll j = i*i;j<=1000000;j+=i){
        primes[j] = 0;
      }
    }
  }
  // special cases
  primes[2] = 1;
  primes[1] = primes[0] = 0;
}


int main(){
  ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  prime_sieve();

  ll n;
  cout<<"Enter a number n: ";
  cin>>n;

  //lets print primes upto range n
  for(int i=0;i<=n;i++){
    if(primes[i] == 1)
      cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}
