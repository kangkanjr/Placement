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

int main(){
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);

  char a[] = {'a','b','c','d','\0'}; // put the null character at the end

  // special behavious
  // 1. direct output
  cout<<a<<endl;

  //2. direct output
  char s[10];
  cin>>s; // null gets automatically added at the end
  cout<<s<<endl;

  //3. another way to initialize
  char s2[] = "Hello!";
  cout<<s2<<endl; 

  return 0;
}
